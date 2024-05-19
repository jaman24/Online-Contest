#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,k;
    cin>>n>>k;
    bool f = true;
    ll ans = INT_MAX;;
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        if(x>=k){
            f = false;
            ans = min(ans, x%k);
        }
    }
    if(f){
        cout<<"-1"<<endl;
    }
    else cout<<ans<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}