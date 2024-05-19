#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 1e9 + 7;
void solve(){
    ll n;
    cin>>n;
    string s[n];
    for(auto &x:s)cin>>x;
    ll dp[n+1][n+1];
    memset(dp, 0, sizeof dp);
    if(s[0][0]!='*'){
        dp[0][0] = 1;
    }
    for(int i = 1; i < n; i++){
        if(s[i][0]!='*')dp[i][0] = dp[i-1][0];
        if(s[0][i]!='*')dp[0][i] = dp[0][i-1];
    }
    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++){
            if(s[i][j] != '*'){
                dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % MOD;
            }
        }
    }
    cout<<dp[n-1][n-1]<<endl;

}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}