#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool vis[100005];
void dfs(int root, vector<vector<int>>& adj){
    vis[root] = true;
    for(auto x:adj[root]){
        if(!vis[x]){
            dfs(x, adj);
        }
    }
}
void solve(){
    memset(vis, false, sizeof vis);
    ll n, m;
    cin>>n>>m;
    vector<vector<int>> adj(m+1);
    for(int i = 1; i <= n; i++){
        ll x;
        cin>>x;
        while(x--){
            ll y;
            cin>>y;
            adj[y].push_back(i);
        }
    }
    dfs(1, adj);
    for(int i = 1; i <= n; i++){
        if(vis[i] == false){
            cout<<i<<endl;
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}