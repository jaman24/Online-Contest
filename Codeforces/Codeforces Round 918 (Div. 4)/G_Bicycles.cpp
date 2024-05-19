#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll, int> pi;
void calculate(vector<vector<int>>& adj, map<pair<int, int>, int>& dist, vector<int>& slowness, vector<ll>& ans){
    priority_queue<pi, vector<pi>, greater<pi> > Q;
    Q.push({0ll, 1});
    while(!Q.empty()){
        int node = Q.top().second;
        cout<<Q.top().first<<" ";
        Q.pop();
        for(auto x:adj[node]){
            // route node to x
            ll time = dist[{node, x}] * slowness[node];
            if(ans[x] > (time + ans[node])){
                ans[x] = time + ans[node];
                Q.push({ans[x], x});
            }
        }
    }
}
void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    map<pair<int, int>, int> dist;
    for(int i = 0; i < m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back(v);
        adj[v].push_back(u);
        dist[{u, v}] = w;
        dist[{v, u}] = w;
    }
    vector<int> slowness(n + 1);
    for(int i = 1; i <= n; i++)cin >> slowness[i];
    vector<ll> ans(n + 1);
    for(int i = 1; i <= n; i++) ans[i] = LLONG_MAX;
    ans[1] = 0;
    calculate(adj, dist, slowness, ans);
    cout<<ans[n]<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}