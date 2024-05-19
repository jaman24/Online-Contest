#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

void solve(){
    string s;
    cin>>s;
    map<char, int> mp;
    for(auto x:s)mp[x]++;
    for(int i = 0 ; i < s.size(); i++){
        if(mp[s[i]] == 1){
            cout<<i+1<<endl;
            return;
        }
    }

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