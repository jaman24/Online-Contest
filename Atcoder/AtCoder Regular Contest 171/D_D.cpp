#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 1e9 + 7;

void solve(){
    ll n;
    cin>>n;
    ll c = 0;
    vector<int> v(n);
    for(auto &x:v){
        cin>>x;
        if(x%2==0)c++;
    }
    ll ans = 1;
    for(ll i = 1; i <= c; i++){
        ans *= 2;
        ans %= MOD;
    }
    if(c == n)ans--;
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