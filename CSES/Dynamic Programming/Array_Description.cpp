#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 1e9 + 7;
void solve(){
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(auto &x:a)cin>>x;
    vector<ll> prev(k+1, 0);
   
    for(int i = 1;i <= k; i++){
        if(a[0] == 0 or a[0] == i){
            prev[i] = 1;
        }
    }
    for(int i = 2; i <= n; i++){
        vector<ll> next(k+1, 0);
        int val = a[i-1];
        if(val){
            ll total = prev[val];
            if(val-1 >= 1){
                total += prev[val-1];
            }
            if(val+1 <= k){
                total += prev[val+1];
            }
            next[val] = total % MOD;
            prev = next;
            continue;
        }
        for(int j = 1; j <= k; j++){
            ll total = prev[j];
            if(j-1 >= 1){
                total += prev[j-1];
            }
            if(j+1 <= k){
                total += prev[j+1];
            }
            next[j] = total % MOD;
        }
        prev = next;
    }
    ll ans = 0;
    for(int i = 1;i<=k;i++){
        ans += prev[i];
        ans %= MOD;
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