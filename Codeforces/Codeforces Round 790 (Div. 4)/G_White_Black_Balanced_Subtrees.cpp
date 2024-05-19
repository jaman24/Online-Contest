#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll ans = 0;
vector<ll> val(4005);
bool vis[4005];
ll dfs(int root, vector<vector<ll>>& adj){
    int sum = val[root];
    vis[root] = true;
    for(auto x:adj[root]){
        if(!vis[x]){
            sum += dfs(x,adj);
        }
    }
    // cout<<"ROOT -> "<<root<<" "<<sum<<endl;
    if(sum == 0)ans++;
    return sum;
}
void solve(){
    ans = 0;
    ll n;
    cin>>n;
    memset(vis,false,sizeof vis);
    vector<vector<ll>> adj(n+1);
    for(ll i = 2;i<=n;i++){
        ll x;
        cin>>x;
        adj[x].push_back(i);
        adj[i].push_back(x);
    }
    string s;
    cin>>s;
    for(int i = 1;i<=n;i++){
        if(s[i-1] == 'W')val[i] = 1;
        else val[i] = -1;
    }
    dfs(1 , adj);
    cout<<ans<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}