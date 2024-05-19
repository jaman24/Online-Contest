#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,l;
    cin>>n>>l;
    ll c = 0;
    for(int i = 0;i<n;i++){
        ll x;
        cin>>x;
        if(x>=l)c++;
    }
    cout<<c<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}