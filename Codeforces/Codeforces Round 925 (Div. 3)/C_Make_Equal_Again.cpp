#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    if( n == 1){
        cout<<0<<endl;
        return;
    }
    ll f = 1, l = 1;
    for(int i = 0; i < n-1; i++){
        if(v[i] == v[i+1])f++;
        else break;
    }
    for(int i = n-1; i > 0; i--){
        if(v[i] == v[i-1])l++;
        else break;
    }
    if(f+l > n){
        cout<<0<<endl;
        return;
    }
    ll t = 1;
    if(v[0] == v[n-1]){
        t = f + l;
    }
    ll ans = INT_MAX;
    ans = min(ans, n - (t));
    ans = min(ans, n - l);
    ans = min(ans, n - f);
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