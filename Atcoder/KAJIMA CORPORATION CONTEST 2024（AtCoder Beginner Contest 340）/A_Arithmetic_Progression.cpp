#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n, m, d;
    cin>>n>>m>>d;
    for(int i = n; i <= m; i+=d)cout<<i<<" ";
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