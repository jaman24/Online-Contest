#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,m;
    cin>>n>>m;
    ll x,y;
    cin>>x>>y;
    ll ans = 0;
    ans = max(ans, (x-1)*m);
    ans = max(ans, (y-1)*n);
    ans = max(ans, (n-x)*m);
    ans = max(ans, (m-y)*n);
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