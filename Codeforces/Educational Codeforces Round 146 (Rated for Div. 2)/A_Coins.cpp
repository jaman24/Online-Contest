#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 1e9 +7;

void solve(){
    ll n,sum;
    cin>>n>>sum;
    ll dp[n+1][sum+1];
    ll coin[n+1];
    for(int i = 1; i <= n; i++)cin>>coin[i];
    memset(dp,0 ,sizeof dp);
    for(int i = 0; i <= n; i++ )dp[i][0] = 1;

    for(int i = n; i > 0; i--){
        for(int s = 1; s <= sum; s++){
            ll x = 0;
            if(s >= coin[i]){
                x = dp[i][s-coin[i]];
            }
            dp[i][s] = dp[i-1][s] + x;
            if(i == 2 and s == 6)cout<<dp[i][s]<<endl;
        }
    }
    cout<<dp[n][sum]<<endl;

    for(int i = 0;i <=n;i++){
        for(int j = 0; j<=sum;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

}
int main(){
    int cn = 1;
    // cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}
// 1 2 3 4 5
// dp[i][sum] = dp[i-1][sum] + dp[i-1][sum - coin[i]];