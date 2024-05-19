#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(auto &x:a)cin>>x;
    vector<vector<ll>> dp(n+1, vector<ll>(3));
    for(int i = 0; i < n; i++){
        dp[i + 1][0] = max(dp[i + 1][0], dp[i][0] + (i & 1 ? 0 : a[i]));
			if (i + 2 <= n) dp[i + 2][1] = max(dp[i + 2][1], max(dp[i][0], dp[i][1]) + (i & 1 ? a[i] : a[i + 1]));
			dp[i + 1][2] = max(dp[i + 1][2], max({dp[i][0], dp[i][1], dp[i][2]}) + (i & 1 ? 0 : a[i]));
    }
    cout<<max(dp[n][0], max(dp[n][1], dp[n][2]))<<endl;
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