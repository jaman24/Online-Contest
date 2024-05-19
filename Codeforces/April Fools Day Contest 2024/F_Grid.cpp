#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n = 21;
    string s[n];
    for(auto &x:s)cin>>x;
    ll ans = 0, ans1 = 0;
    for(int i = 0; i < n; i++){
        if(s[i][n-i-1] == '1')ans++;
        if(s[i][i] == '1')ans1++;
    }
    ans = min(ans, ans1);
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