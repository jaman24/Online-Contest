#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 1e9 + 7;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>
ll dp[300010];
ll cal(ll r){
    if(r == 1 or r == 0){
        return dp[r];
    }
    if(dp[r] != -1){
        return dp[r];
    }
    ll x = ((r * 2) + ((r-1)*2) - 2)/2;

    ll ans = (cal(r-1))%MOD;
    ll ans1 = (x * cal(r-2))%MOD;
    ll ret = (ans+ans1)%MOD;
    return dp[r] = ret;
}
void solve(){
    ll n, k;
    cin>>n>>k;
    ll line = 0;
    for(int i = 0; i < k; i++){
        ll x, y;
        cin>>x>>y;
        if(x == y){
            line++;
        }
        else line += 2;
    }
    ll rem = n - line;
    for(int i = 0; i <= rem; i++){
        dp[i] = -1;
    }
    dp[0] = 1;
    dp[1] = 1;
    ll ans = cal(rem);
    cout<<ans<<endl;
    // for(int i = 1; i <= rem; i++)cout<<dp[i]<<" ";
    // cout<<endl;

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