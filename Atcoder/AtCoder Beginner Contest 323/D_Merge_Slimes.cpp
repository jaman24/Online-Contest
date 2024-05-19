#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;

void solve(){
    ll n;
    cin>>n;
    map<ll,ll> mp;
    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        mp[x]=y;
    }
    ll ans = 0;
    for(auto [x,y]:mp){
        if(y%2)ans+=1;
        mp[2*x]+=y/2;
    }
    cout<<ans<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}