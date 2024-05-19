#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,ll> mp;
    for(auto c:s)mp[c]++;
    ll od = 0;
    for(auto [x,y]:mp){
        if(y%2)od++;
    }
    if(od-1<=k){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}