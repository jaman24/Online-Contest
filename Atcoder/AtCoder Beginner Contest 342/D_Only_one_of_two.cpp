#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
bool pos(ll mid, ll k, ll n, ll m){
    ll a = mid/n;
    ll b = mid/m;
    ll c = mid/((n*m)/__gcd(n, m));
    if(a+b-(2*c) >= k)return true;
    return false;
}
void solve(){
    ll n, m, k;
    cin>>n>>m>>k;
    ll l = 0, r = 1e18;
    while(l < r){
        ll mid = l + (r - l)/2;
        if(pos(mid, k, n, m)){
            r = mid;
        }
        else{
            l = mid + 1;
        }
    }
    cout<<l<<endl;
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