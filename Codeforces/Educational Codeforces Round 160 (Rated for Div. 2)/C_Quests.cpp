#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n, k;
    cin>>n>>k;
    ll a[n], b[n];
    for(auto &x:a)cin>>x;
    for(auto &x:b)cin>>x;
    ll ans = 0, presum = 0, mx = 0;
    for(int i = 0; i < n; i++){
        if(k <= i){
            break;
        }
        ll rem = k - (i + 1);
        presum += a[i];
        mx = max(mx, b[i]);
        ans = max(ans, presum + (rem * mx));
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