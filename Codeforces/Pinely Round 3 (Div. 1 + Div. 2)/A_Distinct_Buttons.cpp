#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll mx = 0,my = 0,px = 0,py = 0, zx = 0, zy = 0;
    for(int i = 0; i < n; i++){
        ll x,y;
        cin>>x>>y;
        if(x > 0)px++;
        else if(x < 0)mx++;
        else zx++;
        if(y > 0)py++;
        else if(y < 0)my++;
        else zy++;
    }
    if(mx + zx == n or px + zx == n or my + zy == n or py + zy == n){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}