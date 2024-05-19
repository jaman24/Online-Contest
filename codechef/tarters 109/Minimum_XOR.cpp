#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    ll ans = 0;
    for(auto &x:a){
        cin>>x;
        ans ^=x;
    }
    ll mn = ans;
    for(auto x:a){
        ll y = ans^x;
        mn = min(mn, y);
    }
    cout<<mn<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}