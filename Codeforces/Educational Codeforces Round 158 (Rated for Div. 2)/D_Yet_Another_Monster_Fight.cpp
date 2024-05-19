#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(auto &x:a){
        cin>>x;
    }
    ll pref[n+2],suf[n+2];
    ll mx = 0, mn = 0;
    for(int i = 0;i<n;i++){
        mx = max(mx , a[i] + n - i - 1);
        pref[i+1] = mx ;
    }
    for(int i = n-1;i>=0;i--){
        mn = max(mn, a[i] + i);
        suf[i+1] = mn;
    }
    suf[0] = suf[n+1] = pref[0] = pref[n+1] = 0;
    ll ans = LLONG_MAX;
    for(int i = 1;i<=n;i++){
        ll x = max({a[i-1], suf[i+1], pref[i-1]});
        ans = min(ans, x);
    }
    cout<<ans<<endl;
    
}
int main(){
    int cn = 1;
    // cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}