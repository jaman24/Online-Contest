#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll f(ll x, vector<ll>& h, vector<ll>& c){
    ll cost = 0;
    for(int i = 0; i < h.size(); i++){
        cost += abs(x - h[i]) * c[i];
    }
    return cost;
}
ll ternary_search(ll l, ll r, vector<ll>& h, vector<ll>& c) {
    ll eps = 1e-9;   //set the error limit here
    while (l < r) {
        ll m1 = l + (r - l) / 3;
        ll m2 = r - (r - l) / 3;
        ll f1 = f(m1, h, c);  //evaluates the function at m1
        ll f2 = f(m2, h, c);  //evaluates the function at m2
        if (f1 > f2)
            l = m1+1;
        else
            r = m2-1;
    }
    return f(l, h, c);  //return the maximum of f(x) in [l, r]
}
void solve(){
    ll n;
    cin>>n;
    vector<ll> h(n), c(n);
    ll mn = INT_MAX, mx = INT_MIN;
    for(auto &x:h){
        cin>>x;
        mx = max(mx, x);
        mn = min(mn, x);
    }
    for(auto &x:c)cin>>x;
    ll l = mn, r = mx;
    ll ans = ternary_search(l, r, h, c);
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