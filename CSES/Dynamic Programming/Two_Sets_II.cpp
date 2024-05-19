#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 1e9 + 7;
const int Inv = 500000004;
void solve(){
    ll n;
    cin>>n;
    ll N = (n * (n+1)) / 2;
    if(N%2){
        cout<<0<<endl;
        return;
    }
    N /= 2;
    ll dp[N+1];
    memset(dp, 0, sizeof dp);
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = N; j >= i; j--){
            dp[j] = (dp[j] + dp[j-i]) % MOD;
        }
    }
    cout<<(dp[N] * Inv) % MOD<<endl;
    cout<<Inv * 2<<endl;
}
int main(){
    int cn = 1;
    // cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}