#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool f=false;
ll nod = -1;
ll mod = 1e9 + 7;
bool vis[200010];
ll dist[200010];
void dfs(ll a , vector<vector<ll>>& adj,ll root){
    
    vis[a] = true;
    for(auto x:adj[a]){
        if(!vis[x]){
            dfs(x,adj,a);
        }
        else if(x!=root){
            f=true;
            nod = a;
        }
    }
}
void bfs(int root,vector<vector<ll>>& adj){
    priority_queue<ll,vector<ll>,greater<ll>> Q;
    for(int i=0;i<200010;i++){
        dist[i] = INT_MAX/2;
    }
    dist[root] = 0;
    Q.push(root);
    while(!Q.empty()){
        ll rot = Q.top();
        Q.pop();
        for(auto x:adj[rot]){
            if(dist[rot]+1<dist[x]){
                dist[x] = dist[rot]+1;
                Q.push(x);
            }
        }
    }
}
void solve(){
    memset(vis,false,sizeof(vis));
    ll n,a,b;
    cin>>n>>a>>b;
    vector<vector<ll>> adj(n+1);
    for(int i=0;i<n;i++){
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(a==b){
        cout<<"NO"<<endl;
        return;
    }
    dfs(b , adj,-1);
    if(nod == -1){
        cout<<"YES"<<endl;
        return;
    }
    // cout<<nod<<endl;
    bfs(nod,adj);
    // cout<<dist[a]<<" "<<dist[b]<<endl;
    if(dist[a]>dist[b]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}