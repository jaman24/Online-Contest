#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 1e9 + 7;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    ll sum = 0, mx = 0, tot = 0;
    for(int i = 0; i < n; i++){
        if(v[i] + sum < 0){
            sum = 0;
        }
        else{
            sum += v[i];
        }
        mx = max(sum, mx);

        tot += v[i];
        tot = (tot + MOD)%MOD;
    }
    ll ans = mx;
    // cout<<mx<<endl;
    for(int i = 1; i < k; i++){
        mx += mx;
        ans += mx;
        mx %= MOD;
        ans = (ans + MOD) % MOD;
    }
    // cout<<mx<<" "<<ans<<endl;
    ans = (tot + ans + MOD)%MOD;
    cout<<ans<<endl;
}
int main(){
    FastIO;
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}