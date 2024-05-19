#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    
    map<int, int> mp;
    vector<int> v(26);
    for(auto &x:v)cin>>x;
    
    string s;
    cin>>s;
    for(auto x:s)mp[x-'a']++;
    ll ans = 0;
    for(int i = 0; i < 26; i++){
        if(mp.find(i) == mp.end())ans += v[i];
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