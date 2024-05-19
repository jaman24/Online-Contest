#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
void bfs(ll n, vector<vector<ll>>& adj, map<pair<ll,ll>, vector<ll>>& mp, vector<ll>& ans){
    for(int i = 0; i <= n; i++)ans[i] = -1;
    priority_queue<pair<ll,ll>> q;
    q.push({LLONG_MAX, n});
    while(!q.empty()){
        auto x = q.top();
        ll node = x.second;
        ll val = x.first;
        q.pop();
        for(auto a:adj[node]){
            ll mn = mp[{node, a}][0];
            ll rem = val - mp[{node, a}][3];

            ll d = mp[{node, a}][1];
            ll k = mp[{node, a}][2];
            
            if(rem < mn)continue;
            ll p = rem - mn;
            ll z = p/d;
            ll res = mn + min(z*d , (k-1)*d);
            if(ans[a] < res){
                q.push({res, a});
                ans[a] = res;
            }
        }
    }
}
void solve(){
    ll n, m;
    cin>>n>>m;
    map<pair<ll,ll>, vector<ll>> mp;
    vector<vector<ll>> adj(n+1);
    for(int i = 0; i < m; i++){
        ll l, d, k, c, a, b;
        cin>>l>>d>>k>>c>>a>>b;
        mp[{b,a}] = {l, d, k, c};
        adj[b].push_back(a);
    }
    vector<ll> ans(n+1);
    bfs(n, adj, mp, ans);
    for(int i = 1; i < n; i++){
        if(ans[i] != -1)cout<<ans[i]<<endl;
        else cout<<"Unreachable"<<endl;
    }
}
int main(){
    FastIO;
    int cn = 1;
    // cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}