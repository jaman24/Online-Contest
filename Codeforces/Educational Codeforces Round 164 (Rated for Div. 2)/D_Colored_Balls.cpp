#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 998244353;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>
ll binexp(ll base, ll exp, ll M){
    if(exp==0)
        return 1;
    ll ret = binexp(base, exp/2, M);
    ret=((ret%M)*(ret%M))%M;
    if(exp&1)
        return ((ret%M)*(base%M))%M;
    return ret;
}
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    sort(all(v));
    ll ans = 0, sum = 0;
    for(int i = 0; i < n; i++){
        ll x = binexp(2, i, MOD);
        // cout<<x<<endl;
        ll temp = (x * v[i]) % MOD;
        ans += temp;
        ans %= MOD;
        // cout<<ans<<endl;
        if(sum > v[i]){
            ans += (sum - v[i]);
            ans = (ans + MOD) % MOD;
        }
        sum += v[i];
    }
    cout<<ans<<endl;
}
int main(){
    FastIO;
    int cn = 1;
    // cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}