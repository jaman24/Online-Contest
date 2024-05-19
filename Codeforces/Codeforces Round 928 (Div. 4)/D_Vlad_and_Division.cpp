#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll check_bit( ll n, ll k)
{
    return (n >> k) & 1ll;
}
ll set_bit(ll n, ll k)
{
    if(check_bit(n,k) == 0){
        n ^= 1ll << k;
    }
    return n;
}
ll unset_bit(ll n, ll k){
    if(check_bit(n,k) == 1ll){
        n ^= 1ll << k;
    }
    return n;
}
void solve(){
    ll n;
    cin>>n;
    map<ll, ll> mp;
    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        v[i] = x;
        mp[x]++;
    }
    ll ans = 0;
    for(auto x:v){
        if(mp.find(x) != mp.end()){
            ll m = 0;
            for(int i = 0; i < 31; i++){
                if(check_bit(x, i) == 0){
                    m = set_bit(m, i);
                }
            }
            if(mp.find(m) != mp.end()){
                mp[m]--;
                if(mp[m] == 0)mp.erase(m);
                ans++;
                mp[x]--;
                if(mp[x] == 0)mp.erase(x);
            }
        }
    }
    cout<<ans + (n - (ans*2))<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}