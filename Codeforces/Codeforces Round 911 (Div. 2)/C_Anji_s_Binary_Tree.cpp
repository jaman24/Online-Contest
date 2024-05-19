#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
int ans = INT_MAX;
ll adj[400000][2];
string s;
void dfs(int root, int t){
    if(adj[root][0] == 0 and adj[root][1] == 0){
        // leaf
        ans = min(ans, t);
        return;
    }
    if(adj[root][0] != 0){
        dfs(adj[root][0], t + (s[root-1] == 'L' ? 0 : 1));
    }
    if(adj[root][1] != 0){
        dfs(adj[root][1], t + (s[root-1] == 'R' ? 0 : 1));
    }
    
}
void solve(){
    ans = INT_MAX;
    s.clear();
    ll n;
    cin>>n;
    cin>>s;
    for(int i = 0;i<=n;i++)adj[i][0] = adj[i][1] = 0;
    for(int i = 1; i <= n; i++){
        cin>>adj[i][0]>>adj[i][1];
    }
    dfs(1, 0);
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