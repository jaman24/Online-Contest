#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n, t;
    cin>>n>>t;
    ll ans = INT_MAX;
    for(int i = 0; i < n; i++){
        ll x, y;
        cin>>x>>y;
        if(y <= t){
            ans = min(ans, x);
        }
    }
    if(ans == INT_MAX){
        cout<<"TLE"<<endl;
        return;
    }
    cout<<ans<<endl;
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