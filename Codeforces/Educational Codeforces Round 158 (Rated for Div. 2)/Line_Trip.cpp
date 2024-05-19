#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,x;
    cin>>n>>x;
    ll a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    ll ans = a[0];
    for(int i = 1;i<n;i++){
        ans = max(ans, abs(a[i] - a[i-1]));
    }
    ans = max(ans, abs(x - a[n-1])*2);
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