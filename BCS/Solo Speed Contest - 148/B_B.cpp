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
    vector<int> v(n);
    for(auto &x:v)cin>>x;
    ll ans = -LLONG_MAX;
    for(int i = 0; i < n; i++){
        ll y;
        cin>>y;
        ll x = v[i] * 20;
        x -= (y * 10);
        if(x < 0)x = 0;
        ans = max(ans, x);
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