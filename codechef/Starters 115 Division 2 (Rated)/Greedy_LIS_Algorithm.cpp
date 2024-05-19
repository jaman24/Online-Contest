#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,x;
    cin>>n>>x;
    if(n == 1 and x == 0){
        cout<<1<<endl;
        return;
    }
    if(x + 2 > n){
        cout<<"-1"<<endl;
        return;
    }
    cout<<x + 2<<" ";
    for(int i = 1; i <= n; i++){
        if(i != x+2)cout<<i<<" ";
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