#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(auto &x:a){
        cin>>x;
    }
    ll f = a[0];
    sort(a,a+n);
    if(a[0] == f){
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