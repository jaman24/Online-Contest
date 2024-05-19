#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    int n, k;
    cin>>n>>k;
    ll dp[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            dp[i][j] = -INT_MAX;
        }
    }
    ll v[n][n] = {0};
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            cin>>v[i][j];
        }
    }
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++)cout<<v[i][j]<<" ";
    //     cout<<endl;
    // }
    vector<ll> ans;
    ans.push_back(0);
    int mx = 5000;
    bool f = true;
    if(n < 15)mx = min(mx, (int)pow(2, n));
    queue<pair<ll, pair<ll,ll>>> Q;
    Q.push({v[0][0], {1, 1}});
    dp[0][0] = v[0][0];
    while(!Q.empty()){
        auto x = Q.front();
        Q.pop();
        int l = x.second.first, r = x.second.second;
        if(r + 1 < n){
            ll cost = dp[l][r] + v[l][r+1];
            if(cost > dp[l][r+1]){
                dp[l][r+1] = cost;
                ans.push_back(cost);
                Q.push({cost, {l, r+1}});
            }
            ll cost1 = dp[l][r] + v[r+1][0];
            if(cost1 > dp[r+1][0]){
                dp[r+1][0] = cost1;
                ans.push_back(cost1);
                Q.push({cost1, {r+1, 0}});
            }
        }
    }
    sort(all(ans));
    reverse(all(ans));
    for(int i = 0; i < k; i++)cout<<ans[i]<<" ";
    cout<<endl;

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