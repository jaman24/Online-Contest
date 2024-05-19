#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(int i = 0; i < n;i++){
        ll x;
        cin>>x;
        a[i] = pow(10, x);
    }
    k += 1;
    if(n==1){
        cout<<k<<endl;
        return;
    }
    ll rem[n];
    rem[0] = (a[1]/a[0]) - 1;
    for(int i = 1; i < n-1; i++){
        rem[i] = (a[i+1]/a[i]) - 1;
    }
    ll ans = 0;
    for(int i = 0; i < n-1; i++){
        if(k >= rem[i]){
            ans += (rem[i] * a[i]);
            k-= rem[i];
        }
        else{
            ans += (k * a[i]);
            k = 0;
            break;
        }
    }
    if(k){
        ans += a[n-1] * k;
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