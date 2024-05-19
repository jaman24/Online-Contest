#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n,x,y;
    cin>>n>>x>>y;
    ll g=(x*y)/__gcd(x,y);
    ll common = n/g;
    ll add = (n/x) - common;
    ll sub = (n/y) - common;
    ll ans = (n*(n+1))/2;
    ll temp = n-add;
    ans -= ((temp*(temp+1))/2);
    ans -= ((sub*(sub+1))/2);
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