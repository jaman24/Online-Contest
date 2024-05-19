#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
int count(vector<int>& coins, int n, int sum)
{
    vector<vector<int> > dp(n + 1, vector<int>(sum + 1, 0));
 
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= sum; j++) {
            dp[i][j] += dp[i - 1][j];
 
            if ((j - coins[i - 1]) >= 0) {
                dp[i][j] += dp[i][j - coins[i - 1]];
            }
        }
    }
    return dp[n][sum];
}
void solve(){
    int x,m,n;
    cin>>x>>m>>n;
    vector<int> v;
    int mul = 1;
    while(mul<=n){
        v.push_back(mul);
        mul*=m;
    }
    // for(auto x:v)cout<<x<<" ";
    // cout<<endl<<endl;;
    int k = v.size();
    int ans = count(v,k,n);
    cout<<x<<" "<<ans<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}