#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

void solve(){
    ll n, c;
    cin>>n>>c;
    ll ans = c*c;
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    vector<ll> zor, biz;
    for(int i = 0; i < n; i++){
        if(v[i]%2)biz.push_back(v[i]);
        else zor.push_back(v[i]);
        if(c >= v[i])ans -= (c - v[i]+1);
        ll x, y;
        if(v[i] > c){
            x = (v[i] - c);
            if(x <= c)y = (c - x + 2)/2;
        }
        else{
            x = 0;
            y = (c/2) + 1;
        }
        ans -= y;
        ll z = c - x, xx;
        if(z%2){
            xx = upper_bound(all(biz), x) - v.begin();
        }
        else{
            xx = upper_bound(all(zor), x) - v.begin();
        }
        ans += xx;
    }
    cout<<ans<<endl;
}
int main(){
    FastIO;
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}