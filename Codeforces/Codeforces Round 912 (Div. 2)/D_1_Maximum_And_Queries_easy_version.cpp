#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
int check_bit(unsigned int n, unsigned int k)
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
    ll n,q;
    cin>>n>>q;
    ll a[n];
    for(auto &x:a){
        cin>>x;
    }
   
    ll bit[100] = {0};
    for(int k = 0;k<61;k++){
        for(int i = 0;i<n;i++){
            if(check_bit(a[i], k) == 0)bit[k]++;
        }
    }
    // for(int i = 0;i<5;i++)cout<<bit[i]<<" ";
    // cout<<endl;
    while(q--){
        ll z;
        cin>>z;
        ll m = z;
        ll c = 0;
        while(m){
            m/=2;
            c++;
        }
        ll ans = 0;
        for(int i = c+1; i >= 0; i--){
            ll y = set_bit(0, i);
            // cout<<i<<" "<<y<<endl;
            __int128_t sum = bit[i] * y;
            // cout<<i<<" "<<sum<<endl; 
            if(sum <= z){
                z -= sum;
                ans = set_bit(ans, i);
            }
        }
        cout<<ans<<endl;
    }

}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}