#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    string s[n];
    for(int i = 0; i < n; i++){
        cin>>s[i];
    }
    ll ans = 0;
    map<char,ll> mf,ml;
    map<string,ll> mp;
    set<string> st;
    for(int i = 0; i < n; i++){
        char c = s[i][0];
        char d = s[i][1];
        ll x = mf[c] + ml[d] - (2 * mp[s[i]]);
        ans += x;

        mf[s[i][0]]++;
        ml[s[i][1]]++;
        mp[s[i]]++;
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