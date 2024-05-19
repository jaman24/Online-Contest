#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int vis[200005]={0};
bool col[200005];
ll dfs(ll root, vector<vector<ll>> &adj,ll mn,ll i, ll dis){
    vis[root] = i;
    if(col[root] or dis>=mn){
        mn = dis;
        return dis;
    }
    ll z = mn;
    for(auto x:adj[root]){
        if(vis[x] != i){
            z = min(z, dfs(x, adj, mn, i, dis+1));
        }
    }
    return z;
}
void solve(){
    memset(col , false , sizeof col);
    memset(vis,0,sizeof vis);
    ll n,st;
    cin>>n>>st;
    vector<vector<ll>> adj(n+1);
    ll a[n-1];
    for(int i = 0; i < n-1; i++){
        cin>>a[i];
    }
    for(int i = 0; i < n-1; i++){
        ll x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    col[st] = true;
    ll ans[n-1];
    ll z = n;
    for(int i = 0;i<n-1;i++){
        if(z == 1){
            ans[i] = 1;
            continue;
        }
        ll dis = dfs(a[i], adj, z, i+1, 0);
        z = dis;
        ans[i] = dis;
        col[a[i]] = true;
    }
    for(int i = 0;i<n-1;i++)cout<<ans[i]<<" ";
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