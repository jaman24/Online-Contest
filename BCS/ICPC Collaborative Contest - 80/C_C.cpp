#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int res[20];
    bool vis[20];
    int dfs1(int root, vector<vector<int>>& adj, set<int>& sub){
        vis[root] = true;
        int ans = 0;
        for(auto x:adj[root]){
            if(!vis[x] and sub.find(x) != sub.end()){
                int z = dfs1(x, adj, sub) + 1;
                ans = max(ans, z);
            }
        }
        return ans;
    }
    int solve(vector<vector<int>>& adj, set<int>& sub){
        int dis = 0;
        for(auto x:sub){
            memset(vis, false, sizeof vis);
            int cur = dfs1(x, adj, sub);
            dis = max(dis, cur);
        }
        return dis;
    }
    void dfs(int root, vector<vector<int>>& adj, set<int>& sub){
        vis[root] = true;
        for(auto x:adj[root]){
            if(!vis[x] and sub.find(x) != sub.end()){
                dfs(x, adj, sub);
            }
        }
    }
    bool pos(vector<vector<int>>& adj, set<int>& sub){
        memset(vis, false, sizeof vis);
        dfs(*sub.begin(), adj, sub);
        for(auto x:sub){
            if(!vis[x])return false;
        }
        return true;
    }
    void cal(int n, int i, vector<vector<int>>& adj, set<int>& sub){
        if(i > n){
            if(sub.size() >= 2){
                if(pos(adj, sub)){
                    int dis = solve(adj, sub);
                    res[dis]++;
                    cout<<dis<<endl;
                    for(auto x:sub)cout<<x<<" ";
                    cout<<endl;
                }
            }
        }
        else{
            sub.insert(i);
            cal(n, i+1, adj, sub);
            sub.erase(i);
            cal(n, i+1, adj, sub);
        }
    }
void solve1(){
    ll n;
    cin>>n;
    vector<vector<int>> adj(n+1);
    for(int i = 0; i < n; i++){
        ll v,u;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    set<int> sub;
    cal(n, 1, adj, sub);
    for(int i = 1; i < n; i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve1();
    }
    return 0;
}