#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 1e9 + 7;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
ll cal(ll x, ll y, ll z, ll tot){
    if(x == 0 and y == 0 and z == 0){
        return 1;
    }
    if(tot%3 == 0){
        ll res = 0;
        if(y > 0)res += cal(x, y-1, z, tot + 1) * y;
        if(z > 0)res += cal(x, y, z-1, tot + 2) * z;
        return res%MOD;
    }
    if(tot%3 == 1){
        ll res = 0;
        if(x > 0)res += cal(x-1, y, z, tot) * x;
        if(y > 0)res += cal(x, y-1, z, tot + 1) * y;
        return res%MOD;
    }
    if(tot%3 == 2){
        ll res = 0;
        if(x > 0)res += cal(x-1, y, z, tot) * x;
        if(z > 0)res += cal(x, y, z-1, tot + 2) * z;
        return res%MOD;
    }
}
void solve(){
    ll n;
    cin>>n;
    ll rem[3] = {0};
    ll x;
    for(int i = 0; i < n; i++){
        cin>>x;
        x%=3;
        rem[x]++;
    }
    // ll tot = rem[1] + rem[2] * 2;
    // if(tot%3 == 0){
    //     cout<<0<<endl;
    //     return;
    // }
    // for(auto x:rem)cout<<x<<" ";
    // cout<<endl;
    ll ans = cal(rem[0], rem[1], rem[2], 0ll);
    cout<<ans<<endl;

}
int main(){
    FastIO;
    int cn = 1;
    // cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}