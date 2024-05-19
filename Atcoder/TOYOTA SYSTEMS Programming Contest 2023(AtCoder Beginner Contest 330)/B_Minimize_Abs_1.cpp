#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,l,r;
    cin>>n>>l>>r;
    ll a[n];
    for(auto &x:a)cin>>x;
    for(auto x:a){
       if(r <= x)cout<<r<<" ";
       else if(l>=x)cout<<l<<" ";
       else cout<<x<<" ";
    }
    cout<<endl;

}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}