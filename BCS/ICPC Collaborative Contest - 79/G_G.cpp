#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n, q;
    cin>>n>>q;
    string s;
    cin>>s;
    map<char, char> mp;
    for(auto x:s)mp[x] = x;
    while(q--){
        char c, d;
        cin>>c>>d;
        char x = mp[c];
        char y = mp[d];
        mp[c] = y;
        mp[d] = x;
    }
    for(int i = 0; i < n; i++){
        for(auto [x,y]:mp){
            if(s[i] == y){
                s[i] = x;
                break;
            }
        }
    }
    cout<<s<<endl;

}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}