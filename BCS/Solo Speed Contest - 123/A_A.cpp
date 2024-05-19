#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    int n,m;
    cin>>n>>m;
    int x = (n * 107);
    int f = x / 100;
    // if(x%100)f++;
    if(m<=f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}