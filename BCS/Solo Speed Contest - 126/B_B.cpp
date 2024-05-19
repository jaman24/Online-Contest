#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll a,b,c,d,k;
    cin>>a>>b>>c>>d>>k;
    ll p = a/c;
    if(a%c)p++;
    ll q = b/d;
    if(b%d)q++;
    if(p+q>k){
        cout<<"-1"<<endl;
    }
    else cout<<p<<" "<<q<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}