#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N = 502;
ll dp[N][N];
ll cal(ll a, ll b){
    if(a == b){
        return dp[a][b] = 0; 
    }
    if(a == 1 or b == 1){
        return dp[a][b] = max(a, b) - 1;
    }
    if(dp[a][b] != -1){
        return dp[a][b];
    }
    ll x = INT_MAX;
    for(int i = 1; i < a; i++){
        x = min(cal(a-i, b) + cal(i, b) + 1, x);
    }
    for(int i = 1; i < b; i++){
        x = min(cal(a, b-i) + cal(a, i) + 1, x);
    }
    return dp[a][b] = x;
}
void solve(){
    memset(dp, -1, sizeof dp);
    ll a,b;
    cin>>a>>b;
    cout<<cal(a, b)<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}