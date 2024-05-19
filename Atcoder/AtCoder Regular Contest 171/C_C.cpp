#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll b = 1, s = 1;
    if(n == 1 or n == 2){
        cout<<1<<endl;
        return;
    }
    if(n == 3 or n == 4){
        cout<<2<<endl;
        return;
    }
    while(true){
        s *= 2;
        if(s > n)break;
        b++;
    }
    ll res = pow(2, b-1);
    ll ans = n+1 - res;
    ll x  = pow(2, b-1);
    ll y = pow(2, b-2);
    ans = max(ans, x - y);
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