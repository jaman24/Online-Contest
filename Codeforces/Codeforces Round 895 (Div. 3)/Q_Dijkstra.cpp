#include<bits/stdc++.h>
using namespace std;
const int N = 100010;
vector<vector<pair<int,int>>> adj(N);
vector<long long> dist(N , LLONG_MAX/2);
vector<int> route(N , -1);
void dijkstra(int root){
    priority_queue<pair<long long , int>,vector<pair<long long ,int>> , greater<pair<long long,int>>> PQ;
    dist[root] = 0;
    PQ.push({dist[root],root});
    while(!PQ.empty()){
        auto [r_dist,r_node] = PQ.top();
        PQ.pop();
        if(r_dist <= dist[r_node]){
            for(auto [c_node,w]:adj[r_node]){
                if(dist[c_node] > r_dist + w){
                    dist[c_node] = r_dist + w;
                    route[c_node] = r_node;
                    PQ.push({dist[c_node], c_node});
                }
            }
        }
    }
}
void solve(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    
    dijkstra(1);

    vector<int> ans;
    ans.push_back(n);
    while(route[n]!=-1){
        ans.push_back(route[n]);
        n=route[n];
    }
    reverse(ans.begin(),ans.end());
    if(ans[0]!=1){
        cout<<"-1"<<endl;
        return;
    }
    for(auto x:ans)cout<<x<<" ";
    cout<<endl;
}
int main(){
    solve();
    return 0;
}