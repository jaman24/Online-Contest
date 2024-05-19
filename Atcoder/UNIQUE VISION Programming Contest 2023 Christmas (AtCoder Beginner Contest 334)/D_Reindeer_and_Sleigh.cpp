#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,q;
    cin>>n>>q;
    vector<ll> a(n);
    for(auto &x:a)cin>>x;
    sort(a.begin(), a.end());
    for(int i = 1; i < n; i++){
        a[i] += a[i-1];
    }
    while(q--){
        ll x;
        cin>>x;
        int z = upper_bound(a.begin(), a.end(), x) - a.begin();
        cout<<z<<endl;
    }
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}