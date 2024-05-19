#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
int dp[105], dp1[105];
void initialize(int n){
    for(int i = 0; i < 105; i++){
        dp[i] = INT_MAX;
    }
    dp[0] = 0;
    for(int i = 0; i < 105; i++){
        dp1[i] = INT_MAX;
    }
    dp1[n+1] = 0;
}
void solve(){
    int n;
    cin>>n;
    vector<int> v(n+1);
    for(int i = 1; i <= n; i++)cin>>v[i];
    initialize(n);
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= min(i+v[i]-1, n); j++){
            dp[j] = min(dp[i-1] + 1, dp[j]);
        }
    }
    for(int i = 1; i <= n; i++)cout<<dp[i]<<" ";
    cout<<endl;
    for(int i = n; i >= 1; i--){
        for(int j = i; j >= max(i-v[i]+1, 1); j--){
            dp1[j] = min(dp1[i+1] + 1, dp1[j]);
        }
    }
    for(int i = 1; i <= n; i++)cout<<dp1[i]<<" ";
    cout<<endl;
    int ans = INT_MAX;
    for(int i = 0; i <= n; i++){
        ans = min(ans, dp[i]+dp1[i+1]);
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