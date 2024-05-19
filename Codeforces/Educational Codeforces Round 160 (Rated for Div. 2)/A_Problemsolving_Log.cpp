#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int> mp;
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
    }
    int ans = 0;
    for(char c = 'A'; c <= 'Z'; c++){
        if(mp.find(c)!=mp.end()){
            int x = c - 'A' + 1;
            if(mp[c] >= x)ans++;
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