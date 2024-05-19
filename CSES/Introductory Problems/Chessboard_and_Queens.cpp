#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string s[8];
bool vis[8][8];
ll ans = 0;
bool check(int i, int j){
    if(s[i][j] == '*'){
        return false;
    }
    ll x, y;
    x = i, y = j;
    while(x >= 0 and y >= 0){
        if(vis[x][y])return false;
        x--;
        y--;
    }
    x = i, y = j;
    while(x >= 0){
        if(vis[x][y])return false;
        x--;
    }
    x = i, y = j;
    while(x >= 0 and y < 8){
        if(vis[x][y])return false;
        x--;
        y++;
    }
    return true;
}
void sol(int i){
    if(i >= 8){
        ans++;
        return;
    }
    for(int j = 0; j < 8; j++){
        if(check(i, j)){
            vis[i][j] = true;
            sol(i+1);
            vis[i][j] = false;
        }
    }
}
void solve(){
    memset(vis, false, sizeof vis);
    for(auto &x:s)cin>>x;
    sol(0);
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