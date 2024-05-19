#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;
void solve(){
    ll n,sum;
    cin>>n>>sum;
    ll coin[n];
    for(auto &x:coin)cin>>x;
    ll dp[sum+1];
    for(int i = 0; i <= sum; i++)dp[i] = INT_MAX;
    dp[0] = 0;
    for(int i = 0; i <= sum; i++){
        for(int j = 0; j < n; j++){
            if(i + coin[j] <= sum){
                dp[i + coin[j]] = min(dp[i + coin[j]] , dp[i] + 1);
            }
        }
    }
    if(dp[sum] == INT_MAX){
        cout<<"-1"<<endl;
        return;
    }
    cout<<dp[sum]<<endl;

}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}