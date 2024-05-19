#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n+1];
    for(auto i = 1; i<=n;i++)cin>>a[i];
    a[0] = 1;
    ll ans = 0;
    
    for(int i = 1; i <= n; i++){
        if(a[i] > a[i-1])ans += a[i] - a[i-1];
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