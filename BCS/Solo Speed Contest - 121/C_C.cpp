#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 1e9 + 7;
ll binexp(ll base, ll exp, ll M){
    if(exp==0)
        return 1;
    ll ret = binexp(base, exp/2, M);
    ret=((ret%M)*(ret%M))%M;
    if(exp&1)
        return ((ret%M)*(base%M))%M;
    return ret;
}
void solve(){
    ll n;
    cin>>n;
    cout<<(binexp(10 , n,MOD) - (2 * binexp(9,n,MOD))+binexp(8,n,MOD) +(2 * MOD))%MOD<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}