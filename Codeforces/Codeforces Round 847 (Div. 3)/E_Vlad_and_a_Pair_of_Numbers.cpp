#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll check_bit(ll n, ll k)
{
    return (n >> k) & 1;
}
ll set_bit(ll n, ll k)
{
    if(check_bit(n,k) == 0){
        n ^= 1 << k;
    }
    return n;
}
ll unset_bit(ll n, ll k){
    if(check_bit(n,k) == 1){
        n ^= 1 << k;
    }
    return n;
}
void solve(){
    ll n;
    cin>>n;
    vector<ll> ans;
    ll a=0,b=0;
    bool f = true;
    for(ll i = 0;i<=32;i++){
        if(check_bit(n , i)){
            if(f){
                a = set_bit(a , i);
                f=false;
            }
            else{
                b = set_bit(b , i);
                f=true;
            }
        }
    }
    ll r = 0;
    for(ll i = 32;i>=0;i--){
        if(check_bit(n , i) == 0){
            ll x = (1ll << i);
            if(r + (2 * x) <= n){
                a = set_bit(a , i);
                b = set_bit(b , i);
                r += (2 * x);
            }
        }
    }
    if(r != n){
        cout<<"-1"<<endl;
    }
    else 
    cout<<a<< " "<<b<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}