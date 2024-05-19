#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,x,k;
    cin>>n>>x>>k;
    ll boy = x, girl = n - x;
    ll remb = boy % k;
    ll remg = girl % k;
    cout<<abs(remb - remg)<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}