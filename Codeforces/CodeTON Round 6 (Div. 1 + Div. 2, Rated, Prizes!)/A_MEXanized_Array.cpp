#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,k,x;
    cin>>n>>k>>x;
    if(k > x+1 or n < k){
        cout<<"-1"<<endl;
        return;
    }
    ll ans = (k * (k-1))/2;
    ll r = n - k;
    if(k == x)x--;
    ans += (x*r);
    
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