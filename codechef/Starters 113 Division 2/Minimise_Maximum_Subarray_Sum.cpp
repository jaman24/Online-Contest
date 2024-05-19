#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll x,y;
    cin>>x>>y;
    ll scop = y + 1;
    ll each = x / scop;
    ll rem = x % scop;
    ll ans = max(1ll, x - (2 * y));
    if((scop+1)/2 < rem)ans = max(ans, (rem * (each+1)) - (2 * (rem - 1)));
    if(rem)each++;
    ans = max(ans, each);
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