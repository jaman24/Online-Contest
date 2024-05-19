#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n;
    cin>>n;
    map<ll,ll> mp;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        mp[x]=i;
    }
    ll ans=0;
    for(int i=1;i<n;i++){
        if(mp[i]>mp[i+1])ans++;
    }
    cout<<ans<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}