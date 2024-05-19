#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n, x, y;
    cin>>n>>x>>y;
    vector<ll> v(x);
    for(auto &z:v)cin>>z;
    sort(all(v));
    ll ans = 0;
    for(int i = 1; i < x; i++){
        if(i == 1){
            if(v[i] - v[i-1] == 2){
                ans++;
            }
        }
        else{
            if(v[i] - v[i-1] == 2){
                ans += 2;
            }
            else ans += 1;
        }
    }
    if(abs(v[0] - v[x-1]) == n-2)ans += 1;
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