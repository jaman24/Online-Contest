#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n, k;
    cin>>n>>k;
    int x = n - k;
    for(int i = x; i >= 1; i--){
        cout<<i<<" ";
    }
    for(int i = x+1; i <= n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}