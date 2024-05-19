#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
bool cycle = false;
int vis[200010];
void dfs(int root, vector<vector<int>>& adj){
    vis[root] = 1;
    for(auto x:adj[root]){
        if(vis[x] == 1){
            cycle = true;
        }
        if(vis[x] == 0){
            dfs(x, adj);
        }
    }
    vis[root] = 2;
}
void solve(){
    ll n, m;
    cin>>n>>m;
    vector<vector<int>> adj(n+1);
    int v[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>v[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 1; j < n-1; j++){
            adj[v[i][j+1]].push_back(v[i][j]);
        }
    }
    cycle = false;
    for(int i = 1; i <= n; i++)vis[i] = 0;
    for(int i = 1; i <= n; i++){
        if(vis[i] == 0){
            dfs(i, adj);
        }
    }
    if(cycle)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}