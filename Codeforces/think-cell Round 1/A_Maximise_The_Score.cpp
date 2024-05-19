#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n*2);
    for(auto &x:v)cin>>x;
    sort(v.begin(), v.end());
    ll ans = 0;
    for(int i = 0; i < n*2; i+=2)ans += v[i];
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