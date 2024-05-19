#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n,k;
    cin>>n>>k;
    bool x = false;
    for(int i=0;i<n;i++){
        ll y;
        cin>>y;
        if(y==k)x=true;
    }
    if(x)cout<<"YES"<<endl;
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