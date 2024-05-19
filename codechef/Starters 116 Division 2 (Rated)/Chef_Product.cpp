#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    n -= 5;
    ll x = sqrt(n);
    cout<<x<<endl;
    ll ans;
    if(n%2){
        ans = (x+1)/2;
    }
    else{
        ans = x/2;
    }
    cout<<ans<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}