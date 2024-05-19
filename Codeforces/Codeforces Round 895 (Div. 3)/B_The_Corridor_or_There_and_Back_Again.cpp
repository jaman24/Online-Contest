#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n;
    cin>>n;
    map<ll,ll> mp;
    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        if(mp.find(x)!=mp.end()){
            mp[x]=min(mp[x],y);
        }
        else{
            mp[x]=y;
        }
    }
    ll ans = 2000;
    for(auto [x,y]:mp){
        ll z = x+((y-1)/2);
        ans = min(ans , z);
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