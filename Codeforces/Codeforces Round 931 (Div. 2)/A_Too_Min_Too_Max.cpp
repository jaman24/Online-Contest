#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    sort(all(v));
    ll ans = abs(v[0] - v[n-1]);
    ans += abs(v[n-1] - v[1]);
    ans += abs(v[1] - v[n-2]);
    ans += abs(v[n-2] - v[0]);
    cout<<ans<<endl;
}
int main(){
    FastIO;
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}