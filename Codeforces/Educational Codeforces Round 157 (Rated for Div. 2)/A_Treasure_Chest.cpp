#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll x,y,k;
    cin>>x>>y>>k;
    if(y<=x){
        cout<<x<<endl;
    }
    else{
        if(y - x <= k){
            cout<<y<<endl;
        }
        else{
            ll ans = x + k;
            ll res = (y - x) - k;
            ans += 2 * res;
            cout<<ans<<endl;
        }
    }

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}