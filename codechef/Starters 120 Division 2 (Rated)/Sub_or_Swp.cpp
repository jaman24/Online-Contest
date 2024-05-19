#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll x, y;
    cin>>x>>y;
    ll ans = __gcd(x, y);
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