#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 

void solve(){
    ll n;
    cin>>n;
    ll x = 1;
    while(x < n){
        x = x << 1;
    }
    // cout<<x<<" "<<n<<endl;
    if(x == n or n%2 == 0){
        cout<<"Bob"<<endl;
    }
    else cout<<"Alice"<<endl;
    
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}