#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n, m, k;
    cin>>n>>m>>k;
    string s[n];
    for(auto &x:s)cin>>x;
    ll rs[n][m], cs[n][m], rx[n][m], cx[n][m];
    for(int i = 0; i < n; i++){
        if(s[i][0] == 'o')rs[i][0] = 1;
        else rs[i][0] = 0;
        if(s[i][0] == 'x')rx[i][0] = 1;
        else rx[i][0] = 0;
    }
    for(int i = 0; i < n; i++){
        for(int j = 1; j < m; j++){
            if(s[i][j] == 'o'){
                rs[i][j] = rs[i][j-1] + 1;
            }
            else{
                rs[i][j] = rs[i][j-1];
            }
            if(s[i][j] == 'x'){
                rx[i][j] = rx[i][j-1] + 1;
            }
            else{
                rx[i][j] = rx[i][j-1];
            }
        }
    }
    for(int j = 0; j < m; j++){
        if(s[0][j] == 'o'){
            cs[0][j] = 1;
        }
        else{
            cs[0][j] = 0;
        }
        if(s[0][j] == 'x'){
            cx[0][j] = 1;
        }
        else{
            cx[0][j] = 0;
        }
    }
    for(int j = 0; j < m; j++){
        for(int i = 1; i < n; i++){
            if(s[i][j] == 'o'){
                cs[i][j] = cs[i-1][j] + 1;
            }
            else{
                cs[i][j] = cs[i-1][j];
            }
            if(s[i][j] == 'x'){
                cx[i][j] = cx[i-1][j] + 1;
            }
            else{
                cx[i][j] = cx[i-1][j];
            }
        }
    }
    ll ans = 1e8;
    bool f = true;
    for(int i = 0; i < n; i++){
        for(int j = k-1; j < m; j++){
            ll l = j - k + 1, r = j;
            // cout<<l<<" "<<r<<endl;
            ll x = rx[i][r], ache = rs[i][r];
            if(l > 0){
                x -= rx[i][l-1];
                ache -= rs[i][l-1];
            }
            
            if(x > 0)continue;
            f = false;
            ans = min(ans, k - ache);
        }
    }
    for(int j = 0; j < m; j++){
        for(int i = k-1; i < n; i++){
            ll l = i - k + 1, r = i;
            // cout<<l<<" "<<r<<endl;
            ll x = cx[r][j], ache = cs[r][j];
            if(l > 0){
                x -= cx[l-1][j];
                ache -= cs[l-1][j];
            } 
            if(x > 0)continue;
            f = false;
            ans = min(ans, k - ache);
        }
    }
    if(f)cout<<"-1"<<endl;
    else cout<<ans<<endl;

}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}