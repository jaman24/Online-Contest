#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n, k;
    cin>>n>>k;
    vector<ll> a(n), v(n);
    for(auto &x:a)cin>>x;
    for(auto &x:v)cin>>x;
    v.push_back(0);
    map<ll,ll> mp;
    for(int i = 0; i < n; i++){
        mp[abs(v[i])] += a[i];
    }
    ll tot = 0;
    for(auto [x,y]:mp){
        tot += y;
        if(x*k < tot){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}