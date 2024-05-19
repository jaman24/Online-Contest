#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
ll expo(ll n,ll p){
    n%=mod;
    if(p==0)return 1;
    if(p&1){
        return (n*expo(n,p-1))%mod;
    }
    ll x=expo(n,p/2);
    return (x*x)%mod;
}
void solve(){
    ll n;
    cin>>n;
    map<ll,ll> mp;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        mp[x]++;
    }
    
    ll ans = 1;
    ll x = 1;
    bool even = false;
    for(auto [p,e]:mp){
        if(!even and (e+1)%2==0){
            x *= (e+1)/2;
            x%=(mod-1);
            even = true;
        }
        else{
            x *= (e+1);
            x%=(mod-1);
        }
    }
    if(!even){
        for(auto [p,e]:mp){
            e/=2;
        }
    }
    for(auto [p,e]:mp){
        ll z = expo(p,1ll*e*x);
        ans*=z;
        ans%=mod;
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