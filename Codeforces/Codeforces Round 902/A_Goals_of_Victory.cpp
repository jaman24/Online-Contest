#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll ans = 0,a=0,b=0;
    for(int i=0;i<n-1;i++){
        ll x;
        cin>>x;
        if(x>0)a+=x;
        else b+=x;
    }
    // if(a>abs(b)){
        cout<<abs(b)-a<<endl;
    // }
    // else{
    //     cout<<
    // }
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}