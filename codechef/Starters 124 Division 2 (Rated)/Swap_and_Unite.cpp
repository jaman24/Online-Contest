#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

void solve(){
    ll n;
    string s;
    cin>>s;
    n = s.size();
    map<char, int> mp;
    for(auto x:s){
        mp[x]++;
    }
    int ans = INT_MAX;
    for(auto [x,y]:mp){
        int f, l;
        for(int i = 0; i < n; i++){
            if(s[i] == x){
                f = i;
                break;
            }
        }
        for(int i = n-1; i >= 0; i--){
            if(s[i] == x){
                l = i;
                break;
            }
        }
        int len = l - f + 1;
        int ot = len - mp[x];
        int c = 0;
        for(int i = f; i < f+mp[x]; i++){
            if(s[i] != x)c++;
        }
        ans = min(ans, mp[x] - c);
        ans = min(ans, c);
        c = 0;
        for(int i = l; i > l - mp[x]; i--){
            if(s[i] != x)c++;
        }
        ans = min(ans, mp[x] - c);
        ans = min(ans, c);
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