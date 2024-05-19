#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,l,s;
    cin>>n>>l>>s;
    ll x = s/3;
    ll y = min(x, l);
    ll r = l - y;
    y += r/2;
    if(y >= n){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}