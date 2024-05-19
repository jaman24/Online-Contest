#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    ll mn = 1e9;
    for(int i = 0;i<n;i++){
        cin>>a[i];
        mn = min(mn, a[i]);
    }
    ll ans = 0;
    for(auto x:a){
        ans += (x - mn);
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