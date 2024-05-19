#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll l[n],r[n],c[n];
    for(auto &x:l)cin>>x;
    for(auto &x:r)cin>>x;
    for(auto &x:c)cin>>x;
    sort(l, l+n);
    sort(r, r+n);
    sort(c, c+n);
    ll ans = 0;
    map<ll,ll> mp;
    for(int i = 0; i < n; i++){
        mp[r[i] - l[i]]++;
    }
    int j = n-1;
    for(auto [x,y]:mp){
        for(int i = 0; i < y; i++){
            ans += x * c[j];
            j--;
        }
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