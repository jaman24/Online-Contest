#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    map<int, set<char>> mp;
    for(char i = 'a'; i <= 'z'; i++){
        mp[0].insert(i);
    }
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        auto it  = mp[x].begin();
        char c = *it;
        mp[x+1].insert(c);
        mp[x].erase(c);
        cout<<c;
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