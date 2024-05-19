#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n, k;
    cin>>n>>k;
    ll base = 1;
    ll th = 0;
    while(th < k and base <= n){
        ll x = 1;
        x += ((n-base)/(base*2));
        if(x + th >= k){
            break;
        }
        th += x;
        base *= 2;
    }
    ll rem = k - th;
    if(rem == 1){
        cout<<base<<endl;
    }
    else{
        base += (rem-1)*(base*2);
        cout<<base<<endl;
    }
    // cout<<base<<" "<<th<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}