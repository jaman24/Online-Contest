#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,q;
    cin>>n>>q;
    ll ans = 0;
    map<char, ll> mp;
    string s;
    cin>>s;
    ll x = 1;
    for(int i = 0; i < n-1; i++){
        if(s[i] != s[i+1]){
            mp[s[i]] = max(mp[s[i]], x);
            ans =  max(ans, mp[s[i]]);
            x = 1;
        }
        else x++;
    }
    mp[s[n-1]] = max(mp[s[n-1]], x);
    ans = max(ans, x);
    cout<<ans<<" ";
    
    for(int i = 0; i < q; i++){
        char c;
        cin>>c;
        if(c == s.back()){
            x++;
            mp[c] = max(mp[c], x);
            ans = max(ans, mp[c]);
        }
        else{
            x = 1;
            mp[c] = max(mp[c], x);
            ans = max(ans, mp[c]);
        }
        s += c;
        cout<<ans<<" ";

    }
    cout<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}