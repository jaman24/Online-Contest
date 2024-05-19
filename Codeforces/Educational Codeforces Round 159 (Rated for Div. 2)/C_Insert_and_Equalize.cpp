#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    unordered_map<ll, ll> mp;
    for(auto &x:a){
        cin>>x;
        mp[x]++;
    }
    if(n == 1){
        cout<<1<<endl;
        return;
    }
    ll mx = a[0];
    for(auto x:a)mx = max(mx, x);
    
    ll gc = abs(mx - a[0]);

    for(auto x:a){
        ll dis = abs(mx - x);
        gc = __gcd(gc, dis);
    }
    ll ans = 0;
    // cout<<gc<<endl;
    for(auto x:a){
        ll dis = abs(mx - x);
        // cout<<dis<<" ";
        ans += dis/gc;
    }
    while(mp.find(mx) != mp.end()){
        mx -= gc;
        ans++;
    }
    // cout<<mx<<" "<<gc<<endl;
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