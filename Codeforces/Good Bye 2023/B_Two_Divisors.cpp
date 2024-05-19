#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll a, b;
    cin>>a>>b;
    ll x = (a * b)/ (gcd(a,b));
    if(x == b) x *= (b/a);
    cout<<x<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}