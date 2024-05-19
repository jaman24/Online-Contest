#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    map<char, char> mp;
    for(char c = 'a'; c <= 'z'; c++){
        mp[c] = c;
    }
    ll q;
    cin>>q;
    while(q--){
        char c, d;
        cin>>c>>d;
        for(auto [x, y]:mp){
            if(y == c){
                mp[x] = d;
            }
        }
    }
    for(auto x:s){
        cout<<mp[x];
    }
    cout<<endl;
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