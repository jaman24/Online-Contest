#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
bool vis[2][200010];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};
bool val(int x, int y, int n){
    return x >= 0 and y >= 0 and x < 2 and y < n;
}
void cal(int x, int y, string s[], int n, bool f){
    vis[x][y] = true;
    // cout<<x<<" "<<y<<" "<<f<<endl;
    if(f){
        for(int i = 0; i < 4; i++){
            int xx = x + dx[i];
            int yy = y + dy[i];
            if(val(xx, yy, n) and !vis[xx][yy]){
                cal(xx, yy, s, n, false);
            }
        }
    }
    else{
        if(s[x][y] == '<' and !vis[x][y-1]){
            cal(x, y-1, s, n, true);
        }
        if(s[x][y] == '>' and !vis[x][y+1]){
            cal(x, y+1, s, n, true);
        }
    }
}
void solve(){
    ll n;
    cin>>n;
    string s[2];
    cin>>s[0]>>s[1];
    for(int i = 0; i <= n; i++){
        vis[0][i] = vis[1][i] = false;
    }
    cal(0, 0, s, n, true);
    if(vis[1][n-1]){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
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