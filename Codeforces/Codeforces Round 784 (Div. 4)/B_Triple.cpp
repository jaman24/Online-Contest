#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    map<ll,ll> mp;
    for(int i = 0; i <n;i++){
        ll x;
        cin>>x;
        mp[x]++;
    }
    for(auto [x,y]:mp){
        if(y>=3){
            cout<<x<<endl;
            return;
        }
    }
    cout<<"-1"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}