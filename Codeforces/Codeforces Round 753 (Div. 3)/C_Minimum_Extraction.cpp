#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(auto &x:a)cin>>x;
    sort(a,a+n);
    ll ans = a[0], cur = a[0];
    for(int i = 1;i<n;i++){
        a[i] -= cur;
        cur += a[i];
        ans = max(ans, a[i]);
    }
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