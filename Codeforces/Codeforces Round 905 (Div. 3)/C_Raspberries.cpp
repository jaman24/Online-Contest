#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll ans = 10;
    ll c = 0;
    for(int i=0;i<n;i++){
        if(a[i]%k == 0){
            ans = 0;
            break;
        }
        else{
            ll x = a[i]%k;
            ans = min(ans , k - x);
        }
        if(a[i]%2 == 0)c++;
    }
    if(k == 4){
        ll x;
        if(c >1)x = 0;
        else if(c==1)x = 1;
        else {
            x=2;
        }
        ans = min(x,ans);
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