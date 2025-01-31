#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int unsigned long long

const int N=2e5+10;
vector<vector<int>> adj_list(N);
int dist[N],dp[N];
map<pair<int,int>,int> adj_dist;

void bfs(int n){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
    q.push({dist[n],n});
    while(!q.empty()){
        auto parent=q.top();
        q.pop();
        int parent_node=parent.second;
        int distance_parent=parent.first;
        // cout<<parent_node<<" "<<distance_parent<<endl;
        for(auto child:adj_list[parent_node]){
            if(dist[child] > distance_parent+adj_dist[{parent_node,child}]){
                dist[child]= distance_parent+adj_dist[{parent_node,child}];
                q.push({dist[child],child});
            }
        }
    }
}
void solve(){
    int n;
    cin>>n;
    int a,c,b;
    for(int i=1;i<n;i++){
        cin>>a>>b>>c;
        adj_list[i].push_back(i+1);
        adj_list[i].push_back(c);
        adj_dist[{i,i+1}]=a;
        adj_dist[{i,c}]=b;
        if(i+1 == c)adj_dist[{i, i+1}] = min(a, b);
    }
    //adj_dist[1]=0;
    dist[1]=0;
    bfs(1);
    cout<<dist[n]<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k=1e9+10;
    memset(dist,k,sizeof(dist));
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
/* p
3 2 3
1 2 3
1 2 2



*/