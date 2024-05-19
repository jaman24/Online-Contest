#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    vector<ll> ans(n);
    ll mn = n;
    for(int i = n-1; i >= 0; i--){
        ans[i] = mn - v[i];
        mn = min(mn, ans[i]);
    }
    for(auto x:ans)cout<<x<<" ";
    cout<<endl;
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