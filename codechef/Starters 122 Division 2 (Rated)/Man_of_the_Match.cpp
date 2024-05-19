#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    // cin>>n;
    ll ans = -1, in = -1;
    for(ll i = 0; i < 22; i++){
        ll x, y;
        cin>>x>>y;
        ll p = x + (y * 20);
        if(p > ans){
            ans = p;
            in = i+1;
        }
    }

    cout<<in<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}