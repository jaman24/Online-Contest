#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    map<ll, ll> mp;
    mp[0] = 1;
    ll tot = 0;
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        tot += s[i] - '0';
        ll x = tot - i - 1;
        if(mp.find(x) == mp.end())mp[x] = 0;
        mp[x] += 1;
        ans += mp[x] - 1;
    }
    // for(auto [x,y]:mp)cout<<x<<" "<<y<<endl;
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