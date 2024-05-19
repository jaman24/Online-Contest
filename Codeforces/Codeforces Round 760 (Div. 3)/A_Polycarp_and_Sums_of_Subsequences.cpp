#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    
    ll a[7];
    for(auto &x:a)cin>>x;
    cout<<a[0]<<" "<<a[1]<<" "<<a[6] - a[0] - a[1]<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}