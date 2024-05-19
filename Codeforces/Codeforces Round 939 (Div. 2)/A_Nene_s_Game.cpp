#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n, q;
    cin>>n>>q;
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    for(int i = 0; i < q; i++){
        ll x;
        cin>>x;
        cout<<min(x, v[0]-1)<<" ";
    }
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