#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll s1 = 0,s = 0;
    s1 += n%10;
    n/=10;
    s1+=n%10;
    n/=10;
    s1+=n%10;
    n/=10;
    s += n%10;
    n/=10;
    s+=n%10;
    n/=10;
    s+=n%10;
    if(s == s1){
        cout<<"YES"<<endl;
    }
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