#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 1e9 + 7;
const ll N = 1000002;
ll dp[N][2];
void solve(){
    ll n;
    cin>>n;
    dp[1][0] = 1;
    dp[1][1] = 1;
    for(int i = 2; i < N; i++){
        dp[i][0] = (4 * dp[i-1][0]) + dp[i-1][1];
        if(dp[i][0] >= MOD)dp[i][0] %= MOD;
        dp[i][1] = (2 * dp[i-1][1]) + dp[i-1][0];
        if(dp[i][1] >= MOD)dp[i][1] %= MOD;
    }
    cout<<(dp[n][0] + dp[n][1]) % MOD <<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}