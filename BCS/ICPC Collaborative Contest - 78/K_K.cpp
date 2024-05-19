#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
bool pos(ll m, ll x){
    ll y = (m * ( m + 1))/2;
    return y <= x;
}
void solve(){
    ll n;
    cin>>n;
    ll x = n+1;
    ll l = 1, r = 2e9;
    while(l < r){
        ll mid = l + (r - l + 1)/2;
        if(pos(mid, x)){
            l = mid;
        }
        else{
            r = mid - 1;
        }
    }
    cout<<n - l + 1<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}