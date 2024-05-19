#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll cal(ll h, ll a, ll r, ll m, vector<ll>& v){
    ll need = 0, trans = 0;
    for(auto x:v){
        if(x > h){
            trans += x - h;
        }
        else{
            need += h - x;
        }
    }
    ll ans;
    if(a+r < m){
        if(trans > need){
            ans = need * (a+r) + (trans - need) * r;
        }
        else{
            ans = trans * (a+r) + (need - trans) * a;
        }
        return ans;
    }
    else{
        if(trans > need){
            ans = need * m + (trans - need) * r;
        }
        else{
            ans = trans * m + (need - trans) * a;
        }
        return ans;
    }
}
void solve(){
    ll n,a,b,m;
    cin>>n>>a>>b>>m;
    vector<ll> v(n);
    ll tot = 0;
    ll mx = LLONG_MIN, mn = LLONG_MAX;
    for(auto &x:v)cin>>x, mx = max(mx, x), mn = min(mn, x);
    ll l = mn, r = mx, tc = 100, ans = LLONG_MAX;
    while(tc--){
        ll m1 = l + (r-l)/3;
        ll m2 = r - (r-l)/3;
        ll f1 = cal(m1, a, b, m, v);
        ll f2 = cal(m2, a, b, m, v);
        if(f1 > f2){
            ans = min(ans, f2);
            l = m1 + 1;
        }
        else{
            ans = min(ans, f1);
            r = m2 - 1;
        }
    }
    cout<<ans<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}