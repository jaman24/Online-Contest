#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,m,x,y,l;
    cin>>n>>m>>x>>y>>l;
    ll r = 1 + ((y-1)/l) + ((m-y)/l);
    ll c = 1 + ((x-1)/l) + ((n-x)/l);
    cout<<r*c<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}