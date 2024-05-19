#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<ll> v(n);
    for(auto &x:v){
        cin>>x;
        x%=k;
    }
    sort(all(v));
    ll ans = v[n-1] - v[0];
    for(int i = 0; i < n-1; i++){
        if((v[i]+k) - v[i+1] <= ans){
            ans = (v[i]+k) - v[i+1];
        }
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