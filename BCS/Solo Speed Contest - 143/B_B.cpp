#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n, x;
    cin>>n>>x;
    ll y = n - x;
    cout<<min(x, y)<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}