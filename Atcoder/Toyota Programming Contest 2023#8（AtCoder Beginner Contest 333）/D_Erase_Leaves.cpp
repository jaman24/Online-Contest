#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int M = 300005;
vector<vector<int>> adj(M);
bool vis[M] = {false};
int dfs(int root){
    vis[root] = true;
    int ans = 0;
    for(auto x:adj[root]){
        if(!vis[x]){
            ans += dfs(x);
        }
    }
    return ans + 1;
}
void solve(){
    ll n;
    cin>>n;
    for(int i = 0; i < n-1; i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vis[1] = true;
    vector<ll> ans;
    for(auto x:adj[1]){
        if(!vis[x]){
            int res = dfs(x);
            ans.push_back(res);
        }
    }
    sort(ans.begin(), ans.end());
    ll s = 1;
    for(int i = 0; i < ans.size()-1; i++)s += ans[i];
    cout<<s<<"\n";
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}