#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 998244353;
ll inv(ll a, ll m) {
  return a <= 1 ? a : m - (long long)(m/a) * inv(m % a, m) % m;
}
vector<int> pr;
vector<int> sz;
void initialize(int n){
    pr.clear();
    pr.resize(n+1);
    iota(pr.begin(), pr.end(), 0);
    sz.clear();
    sz.resize(n+1);
    for(int i = 0; i <= n; i++)sz[i] = 1;
}
int findParent(int u){
    if(u == pr[u])return u;
    return pr[u] = findParent(pr[u]);
}
void join(int u, int v){
    int pu = findParent(u);
    int pv = findParent(v);
    pr[pu] = pv;
    sz[pv] += sz[pu];
}
void solve(){
    int n;
    cin>>n;
    vector<vector<ll>> adj(n+1);
    for(int i = 0; i < n-1; i++){
        ll x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    initialize(n+1);
    ll pro = 1;
    for(int i = 0; i < n-1; i++){
        int u, v;
        cin>>u>>v;
        int pu = findParent(u);
        int pv = findParent(v);
        if(pu == pv){
            pro = 0;
            continue;
        }
        bool f = true;
        for(auto x:adj[u]){
            int px = findParent(x);
            if(px == pv){
                ll siu = sz[pu];
                ll siv = sz[pv];
                ll t = siu * siv;
                if(t >= MOD)t %= MOD;
                pro *= t;
                if(pro >= MOD) pro %= MOD;

                join(u, x);
                f = false;
                break;
            }
        }
        if(f){
            pro = 0;
        }
    }
    cout<<inv(pro, MOD)<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}