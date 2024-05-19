#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,k;
    cin>>n>>k;
    ll m = n%k;
    if(n/k and m+2<=k)m+=k;
    ll x = m/2;
    ll y = m/2;
    if(m%2)y++;
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