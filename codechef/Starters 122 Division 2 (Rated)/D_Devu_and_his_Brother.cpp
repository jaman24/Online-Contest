#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll cal(ll m, vector<ll>& v, vector<ll>& b){
    ll ans = 0;
    for(auto x:v){
        if(x < m)ans += m - x;
    }
    for(auto x:b){
        if(x > m)ans += x - m;
    }
    return ans;
}
void solve(){
    ll n, m;
    cin>>n>>m;
    vector<ll> v(n), b(m);
    for(auto &x:v)cin>>x;
    for(auto &x:b)cin>>x;
    ll l = 0, r = 1e9, tc = 100;
    ll ans = LLONG_MAX;
    while(tc--){
        ll m1 = l + (r - l)/3;
        ll m2 = r - (r - l)/3;
        ll f1 = cal(m1, v, b);
        ll f2 = cal(m2, v, b);
        if(f1 > f2){
            ans = min(ans, f2);
            l = m1+1;
        }
        else{
            ans = min(ans, f1);
            r = m2-1;
        }
        
    }
    cout<<ans<<endl;
}
int main(){
    int cn = 1;
    // cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}