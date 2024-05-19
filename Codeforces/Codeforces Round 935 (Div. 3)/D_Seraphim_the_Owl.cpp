#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n, m;
    cin>>n>>m;
    vector<ll> a(n), b(n);
    for(auto &x:a)cin>>x;
    for(auto &x:b)cin>>x;
    ll tot = 0;
    for(int i = n-1; i >= m; i--){
        tot += min(a[i], b[i]);
    }
    ll ans = LLONG_MAX;
    for(int i = m-1; i >= 0; i--){
        ans = min(ans, tot + a[i]);
        tot += b[i];
    }
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