#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n, k, z;
    cin>>n>>k>>z;
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    ll res = 0;
    for(int i = 0; i <= z; i++){
        ll pos = k - (2 * i);
        if(pos < 0)continue;
        ll ans = 0, mx = 0;
        for(int j = 0; j < pos+1; j++){
            ans += v[j];
            mx = max(mx, v[j] + v[j+1]);
        }
        res = max(res, ans + mx*i);
    }
    cout<<res<<endl;
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