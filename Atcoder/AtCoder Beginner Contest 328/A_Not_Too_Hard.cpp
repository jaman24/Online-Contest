#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,x;
    cin>>n>>x;
    ll ans = 0;
    for(int i = 0;i<n;i++){
        ll z;
        cin>>z;
    if(z<=x)ans+=z;
    }
    cout<<ans<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}