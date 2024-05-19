#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    map<ll,ll> mp;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        mp[x]++;
    }
    ll ans = 0;
    while(mp.size()){
        ll st = mp.begin() -> first;
        ans++;
        while(mp.find(st)!=mp.end()){
            mp[st]--;
            if(mp[st] == 0){
                mp.erase(st);
            }
            st++;
        }
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