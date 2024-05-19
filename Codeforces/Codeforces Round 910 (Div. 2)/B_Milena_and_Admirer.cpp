#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    ll last = v[n-1];
    v.pop_back();
    ll ans = 0;
    while(v.size()){
        ll x = v.back();
        v.pop_back();
        if(x<=last){
            last = x;
            continue;
        }
        ll d = x/last;
        ll r = x%last;
        if(r){
            ans += d;
            last = x/(d+1);
        }
        else{
            ans += d-1;
        }
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