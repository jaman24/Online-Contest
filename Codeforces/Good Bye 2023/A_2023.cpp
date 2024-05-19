#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n, k;
    cin>>n>>k;
    ll a[n];
    for(auto &x:a)cin>>x;
    ll y = 1;
    for(auto x:a)y*=x;
    if(2023 % y){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        cout<<2023/y<<" ";
        for(int i = 0; i < k-1; i++)cout<<"1"<<" ";
        cout<<endl;
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