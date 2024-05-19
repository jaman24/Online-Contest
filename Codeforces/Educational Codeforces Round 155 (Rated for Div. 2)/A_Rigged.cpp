#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n;
    cin>>n;
    ll x,y;
    cin>>x>>y;
    ll mx = 0;
    for(int i=1;i<n;i++){
        ll a,b;
        cin>>a>>b;
        if(b>=y){
            mx=max(mx,a);
        }
    }
    if(mx+1>x){
        cout<<-1<<endl;
    }
    else cout<<mx+1<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}