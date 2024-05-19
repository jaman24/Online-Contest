#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
const ll N = 300010;
ll ans[N][3];
bool vis[N];
ll mx;
void dfs(ll root, ll k, vector<vector<ll>> & adj, ll rot){
    vis[root] = true;
    bool f = true;
    for(auto x:adj[root]){
        if(!vis[x]){
            f = false;
            dfs(x, k, adj, root);
        }
    }
    if(f){
        ans[root][0] = 1;
        ans[root][1] = 0;
        ans[root][2] = k;
    }
    if(root > 0){
        ans[root][2];
        if(ans[root][2] == 0){
            ans[rot][1] = max(ans[rot][1], ans[root][0] + ans[root][1]);
        }
        else if(ans[root][2] > 0){
            ans[rot][0] += ans[root][0];
            ans[rot][1] = max(ans[rot][1], ans[root][1]);
            ans[rot][2] = max(ans[rot][2], ans[root][2] - 1);
        }
        else{
            ans[rot][2] = max(ans[rot][2], ans[root][2]);
        }
    }
    mx = max(mx, ans[root][0] + ans[root][1]);
}
void initialize(ll n){
    for(int i = 0; i <= n; i++){
        vis[i] = false;
        ans[i][0] = 0;
        ans[i][1] = 0;
        ans[i][2] = 0;
    }
    mx = 0;
}
void solve(){
    ll n, k;
    cin>>n>>k;
    initialize(n);
    vector<vector<ll>> adj(n);
    for(int i = 0; i < n-1; i++){
        ll u, v;
        cin>>u>>v;
        u--, v--;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    dfs(0, k, adj, -1);
    cout<<mx<<endl;
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