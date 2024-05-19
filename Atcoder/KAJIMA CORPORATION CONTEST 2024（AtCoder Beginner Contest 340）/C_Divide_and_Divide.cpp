#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<ll, ll> dp;
ll cal(ll n){
    if(n <= 1){
        return 0;
    }
    if(dp.find(n) != dp.end())return dp[n];
    ll ans = n;
    ll x = cal(n/2);
    if(n%2){
        ans += x + cal((n/2)+1);
    }
    else{
        ans += x + x;
    }
    return dp[n] = ans;
}
void solve(){
    dp.clear();
    ll n;
    cin>>n;
    ll ans = cal(n);
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