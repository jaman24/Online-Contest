#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    string s;
    cin>>s;

    ll cur = 1;
    ll ans = 0;
    for(auto c:s){
        ll x = c-'0';
        if(x==0)x=10;
        ans+=abs(cur - x)+1;
        cur = x;
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