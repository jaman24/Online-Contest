#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

void solve(){
    ll x,n;
    cin>>x>>n;
    ll ans = 1;
    for(ll i = 1; i * i <= x; i++){
        if(x%i == 0){
            if(i >= n)ans = max(ans, x/i);
            if(x/i >= n)ans = max(ans, i);
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