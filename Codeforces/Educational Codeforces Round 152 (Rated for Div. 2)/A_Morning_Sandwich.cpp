#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll b,c,h;
    cin>>b>>c>>h;
    ll ans = 0;
    c += h;
    if(b>1){
        b--;
        cout<<(min(b , c) * 2) + 1<<endl;
    }
    else cout<<b<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}