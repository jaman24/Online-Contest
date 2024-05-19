#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<vector<ll>> adj(100005);
bool vis[100005] = {false};
ll dfs(int root){
    vis[root] = true;
    int c = 0;
    for(auto x:adj[root]){
        if(!vis[x]){
            c += dfs(x) + 1;
        }
    }
    return c;
}
void solve(){
    ll n;
    cin>>n;
    for(int i = 0;i<n;i++){
        ll x;
        cin>>x;
        adj[i].push_back(x-1);
        adj[x-1].push_back(i);
    }
    ll ans = 0;
    vector<ll> v;
    for(int i = 0;i<n;i++){
        if(!vis[i]){
            ll x = dfs(i);
            v.push_back(x+1);
        }
    }
    sort(v.begin(),v.end());
    if(v.size()>1){
        ll x = v.back();
        v.pop_back();
        x += v.back();
        v.pop_back();
        v.push_back(x);
    }
    for(auto x:v){
        ans += (x*x);
    }
    cout<<ans<<endl;

}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}