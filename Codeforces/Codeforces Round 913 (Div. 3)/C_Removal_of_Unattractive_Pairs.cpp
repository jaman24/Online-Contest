#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    map<char,ll> mp;
    for(auto x:s)mp[x]++;
    ll mx = 0;
    for(auto [x,y]:mp){
        mx = max(mx, y);
    }
    if(mx <= n/2){
        if(n%2==0)cout<<0<<endl;
        else cout<<1<<endl;
    }
    else{
        cout<<mx - (n - mx)<<endl;
    }
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}