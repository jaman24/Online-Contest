#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    for(ll i = 1;i * i <= n ;i++){
        if(n%i == 0){
            ll x = n/i;
            ll y = i;
            ll z = x^y;
            
            cout<<x <<" "<<z<<endl;
            return; 
        }
    }
        
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}