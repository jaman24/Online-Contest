#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

void solve(){
    ll n,k,m;
    string s;
    cin>>n>>k>>m>>s;
    map<char, ll> mp;
    int c = 0;
    string t = "", ans = "";
    for(int i = 0; i < m; i++){
        mp[s[i]]++;
        if(mp.size() == k){
            c++;
            ans += s[i];
            mp.clear();
        }
    }

    if(c >= n){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    for(char c = 'a'; c < 'a' + k; c++){
        if(mp.find(c) == mp.end()){
            ans += c;
            break;
        }
    }
    while(ans.size() < n)ans += "a";
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