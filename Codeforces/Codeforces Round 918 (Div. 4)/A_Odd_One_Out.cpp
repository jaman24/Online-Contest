#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a == b)cout<<c<<endl;
    else if(b == c) cout<<a<<endl;
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