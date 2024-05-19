#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,m;
    cin>>n>>m;
    ll a[n],b[m];
    for(auto &x:a)cin>>x;
    for(auto &x:b)cin>>x;
    ll x = a[0];
    for(int i = 1;i<n;i++)x^=a[i];
    ll y = b[0];
    for(int i = 1;i<m;i++){
        y |= b[i];
    }
    for(int i = 0;i<n;i++){
        a[i] |= y;
    }
    ll ans = a[0];
    for(int i = 1;i<n;i++)ans^=a[i];
    cout<<min(x,ans)<<" "<<max(x,ans)<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}