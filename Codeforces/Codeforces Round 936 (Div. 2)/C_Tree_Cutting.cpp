#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>
vector<bool> vis(100010, false);
vector<ll> child(100010);
ll tot = 0;
void dfs(int root, ll mid, vector<vector<ll>>& adj){
    vis[root] = true;
    for(auto x:adj[root]){
        if(!vis[x]){
            dfs(x, mid, adj);
            child[root] += child[x];
        }
    }
    if(child[root] >= mid){
        child[root] = 0;
        tot++;
    }
}
bool pos(ll mid, vector<vector<ll>>& adj, ll n, ll k){
    for(int i = 0; i < n; i++)vis[i] = false;
    for(int i = 0; i < n; i++)child[i] = 1;
    tot = 0;
    dfs(0, mid, adj);
    return tot > k;
}
void solve(){
    ll n, k;
    cin>>n>>k;
    vector<vector<ll>> adj(n);
    for(int i = 0; i < n-1; i++){
        ll x,y;
        cin>>x>>y;
        x--, y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    ll l = 1, r = n;
    while(l < r){
        ll mid = (l + r + 1)/2;
        if(pos(mid, adj, n, k)){
            l = mid;
        }
        else r = mid - 1;
    }
    cout<<l<<endl;
}
int main(){
    FastIO;
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}