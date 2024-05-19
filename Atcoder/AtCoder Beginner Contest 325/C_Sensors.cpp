#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool vis[1001][1001]={false};
int dx[] = {1,-1,0,0,1,-1,1,-1};
int dy[] = {0,0,1,-1,1,-1,-1,1};
string s[1001];
ll n,m;
bool check(int x,int y){
    if(x>=0 and y>=0 and x<n and y<m){
        return true;
    }
    return false;
}
void bfs(int x,int y){
    vis[x][y] = true;
    for(int i=0;i<8;i++){
        int x1 = dx[i]+x;
        int y1 = dy[i]+y;
        if(check(x1,y1) and !vis[x1][y1] and s[x1][y1] == '#'){
            bfs(x1,y1);
        }
    }
}
void solve(){
    cin>>n>>m;

    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    ll ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] and s[i][j] == '#'){
                ans++;
                bfs(i,j);
            }
        }
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