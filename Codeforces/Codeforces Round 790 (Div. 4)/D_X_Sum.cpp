#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
int n,m;
bool pos(int i,int j){
    if(i>=0 and i<n and j>=0 and j<m)return true;
    return false;
}
void solve(){
    cin>>n>>m;
    ll a[n][m];
    for(int i = 0;i<n;i++){
        for(int j =0;j<m;j++){
            cin>>a[i][j];
        }
    }
    ll ans = 0;
    for(int i = 0;i<n;i++){
        for(int j =0;j<m;j++){
            ll c = a[i][j];
            ll x = i,y =  j;
            while(pos(--x, --y)){
                c += a[x][y];
            }
            x = i,y =  j;
            while(pos(++x, ++y)){
                c += a[x][y];
            }
            x = i,y =  j;
            while(pos(--x, ++y)){
                c += a[x][y];
            }
            x = i,y =  j;
            while(pos(++x, --y)){
                c += a[x][y];
            }
            ans = max(ans , c);
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