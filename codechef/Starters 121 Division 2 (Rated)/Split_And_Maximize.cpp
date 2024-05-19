#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll check_bit( ll n,  ll k)
{
    ll x = 1;
    return (n >> k) & x;
}
ll set_bit(ll n, ll k)
{
    if(check_bit(n,k) == 0){
        ll x = 1;
        n ^= x << k;
    }
    return n;
}
ll unset_bit(ll n, ll k){
    if(check_bit(n,k) == 1){
        ll x = 1;
        n ^= x << k;
    }
    return n;
}
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    vector<int> b(65, 0);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 61; j++){
            b[j] += check_bit(v[i], j);
        }
    }
    // for(auto x:b)cout<<x<<" ";
    // cout<<endl;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        vector<int> bit(65);
        for(int j = 0; j < 65; j++)bit[j] = b[j];
        
        ll ache = v[i];
        // cout<<ache<<endl;
        for(int j = 0; j < 61; j++){
            bit[j] -= check_bit(ache, j);
        }

        for(int j = 60; j >= 0; j--){
            ll x = set_bit(0, j);
            // cout<<j<<"th bit is "<<x<<endl;
            if(bit[j]%2 == 0 and x <= ache ){
                ache -= x;
                bit[j]++;
            }
            // cout<<j<<" "<<ache<<endl;
        }
        if(ache % 2){
            bit[0]++;
        }
        ll res = 0;
        for(int j = 60; j >= 0; j--){
            if(bit[j]%2)res = set_bit(res, j);
        }
        ans = max(ans, res);
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