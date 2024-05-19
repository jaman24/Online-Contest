#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll MOD = 1000000007;
void solve(){
    ll n;
    cin>>n;
    ll dp[n+1] = {0};
    dp[1] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 6; j++){
            if(i + j <= n){
                dp[i+j] += dp[i];
                if(dp[i+j]>=MOD)dp[i+j]%=MOD;
            }
        }
    }
    cout<<dp[n]<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}