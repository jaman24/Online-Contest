#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll sum = 0;
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        sum += x;
    }
    ll x = sqrt(sum);
    if(x*x == sum){
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