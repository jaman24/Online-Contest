#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 1e9 + 7;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    sort(all(v));
    ll s = 0;
    for(int i = 0; i < n; i++){
        if(s == 0 or s == 1 or v[i] == 1){
            s += v[i];
        }
        else{
            s = (s * v[i])%MOD;
        }
    }
    cout<<s<<endl;
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