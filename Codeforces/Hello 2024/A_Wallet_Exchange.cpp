#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,m;
    cin>>n>>m;
    if((n+m)%2 == 0){
        cout<<"Bob"<<endl;
    }
    else cout<<"Alice"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}