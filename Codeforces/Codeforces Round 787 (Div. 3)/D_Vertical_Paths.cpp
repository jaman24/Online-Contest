#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll> leaf;
bool vis[200005];
vector<ll> path;
void dfs(ll root, vector<vector<ll>> &adj){
    vis[root] = true;
    if(adj[root].size() == 0){
        leaf.push_back(root);
    }
    for(auto x:adj[root]){
        if(!vis[x]){
            dfs(x,adj);
        }
    }
}
void dfs1(ll root, vector<vector<ll>> &adj){
    path.push_back(root);
    vis[root] = true;
    for(auto x:adj[root]){
        if(!vis[x]){
            dfs1(x,adj);
        }
    }
}
void solve(){
    memset(vis,false,sizeof vis);
    leaf.clear();
    ll n;
    cin>>n;
    vector<vector<ll>> adj(n+1),node(n+1);
    ll r;
    for(int i = 1;i<=n;i++){
        ll x;
        cin>>x;
        if(i == x){
            r = i;
            continue;
        }
        adj[x].push_back(i);
        node[i].push_back(x);
    }
    dfs(r,adj);
    // for(auto x:leaf){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    cout<<leaf.size()<<endl;
    memset(vis, false, sizeof vis);
    for(auto x:leaf){
        if(!vis[x]){
            path.clear();
            dfs1(x , node);
            cout<<path.size()<<endl;
            for(int i = path.size()-1;i>=0;i--){
                cout<<path[i]<<" ";
            }
            cout<<endl;
        }
    }
    cout<<endl;


}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}