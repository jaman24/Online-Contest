#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,m;
    cin>>n>>m;
    string s[n];
    for(auto &x:s)cin>>x;
    ll ans = INT_MAX;
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            ll mn = 0;
            for(int k = 0;k<m;k++){
                mn += abs(s[i][k] - s[j][k]);
            }
            ans = min(ans , mn);
        }
    }
    cout<<ans<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}