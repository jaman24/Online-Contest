#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool vis[100005];
int leaf[100005];
int dist[100005];
int ans = 0;
void dfs(int root, vector<vector<ll>>& adj){
    vis[root] = true;
    bool f = true;
    for(auto x:adj[root]){
        if(!vis[x]){
            f = false;
            dfs(x, adj);
            leaf[root] += leaf[x];
            dist[root] = min(dist[root], dist[x] + 1);
        }
    }
    if(f){
        leaf[root] = 1;
        dist[root] = 0;
    }
}
void dfs1(int root, int dis, vector<vector<ll>>& adj){
    vis[root] = true;
    if(dist[root] <= dis and dist[root] > 0){
        ans = max(ans, leaf[root]);
    }
    for(auto x:adj[root]){
        if(!vis[x]){
            dfs1(x, dis+1, adj);
        }
    }
}
void solve(){
    ll n;
    cin>>n;
    memset(vis, false, sizeof vis);
    memset(leaf, 0, sizeof leaf);
    for(int i = 0; i <= n; i++)dist[i] = INT_MAX;
    vis[0] = true;
    vector<vector<ll>> adj(n);
    for(int i = 0; i < n-1; i++){
        ll x, y;
        cin>>x>>y;
        x--,y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(0, adj);
    // for(int i = 0; i < n; i++){
    //     cout<<dist[i]<<" "<<leaf[i]<<endl;
    // }
    ans = 0;
    memset(vis, false, sizeof vis);
    dfs1(0, 0, adj);
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