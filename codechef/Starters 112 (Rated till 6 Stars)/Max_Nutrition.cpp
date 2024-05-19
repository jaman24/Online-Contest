#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    map<ll,ll> mp;
    ll a[n], b[n];
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        a[i] = x;
        mp[x]++;
    }
    for(auto &x:b)cin>>x;
    ll res = 0;
    for(auto [x,y]:mp){
        ll ans = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == x){
                ans = max(ans, b[i]);
            }
        }
        res += ans;
    }
    cout<<res<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}