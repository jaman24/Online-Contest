#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n, m;
    cin>>n>>m;
    ll a[n];
    for(auto &x:a)cin>>x;
    sort(a, a+n);
    ll sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[n-1] - a[i];
    }
    ll ans = max(a[n-1] - a[0], (sum + m -1)/m);

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