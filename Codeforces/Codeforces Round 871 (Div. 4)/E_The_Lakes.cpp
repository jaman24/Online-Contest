#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool vis[1001][1001] = {false};
int grid[1001][1001];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
ll n,m;
bool val(int i,int j){
    if(i>=0 and i<n and j>=0 and j<m)return true;
    return false;
}
ll dfs(int i,int j){
    vis[i][j] = true;
    ll ans = 0;
    for(int k = 0;k<4;k++){
        int x = dx[k] + i;
        int y = dy[k] + j;
        if(val(x,y) and !vis[x][y] and grid[x][y]){
           ans += dfs(x,y) + grid[x][y];
        } 
    }
    return ans;
}
void solve(){
    memset(vis,false,sizeof vis);
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    ll ans = 0;
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] and grid[i][j]){
                ans = max(ans , dfs(i , j) + grid[i][j]);
            }
        }
    }
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