#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n, k;
    cin>>n>>k;
    ll t = (n * 2) - 2;
    if(k <= t*2){
        ll ans = k/2;
        ans += k%2;
        cout<<ans<<endl;
    }
    else{
        ll ans = t;
        ans += k - (t*2);
        cout<<ans<<endl;
    }
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}