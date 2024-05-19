#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int check_bit(unsigned int n, unsigned int k)
{
    return (n >> k) & 1;
}
void solve(){
    ll n, s;
    cin>>n>>s;
    ll arr[n];
    for(auto &c:arr)cin>>c;

    ll x = n/2;
    ll y = x + n%2;
    ll a[x],b[y];
    ll id = 0;
    for(int i = 0;i<x;i++)a[i] = arr[id++];
    for(int i = 0;i<y;i++)b[i] = arr[id++];

    unordered_map<ll,ll> fast;
    ll d = (1 << x);
    for(int i = 0; i < d; i++){
        ll sum = 0;
        for(int k = 0; k < x; k++){
            if(check_bit(i, k)){
                sum += a[k];
            }
            if(sum > s)break;
        }
        if(sum <= s)fast[sum]++;
    }
    ll ans = 0;
    d = (1 << y);
    for(int i = 0; i < d; i++){
        ll sum = 0;
        for(int k = 0; k < y; k++){
            if(check_bit(i, k)){
                sum += b[k];
            }
            if(sum > s)break;
        }
        if(sum <= s){
            ll need = s - sum;
            if(fast.count(need)){
                ans += fast[need];
            }
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