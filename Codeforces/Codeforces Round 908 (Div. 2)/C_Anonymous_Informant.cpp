#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,k;
    cin>>n>>k;
    k = min(k , n);
    ll a[n+1];
    for(int i = 1;i<=n;i++)cin>>a[i];
    ll cur = n, sh = 0;
    while(k--){
        ll x = a[cur];
        sh += x;
        if(x > n){
            cout<<"NO"<<endl;
            return;
        }
        cur = n - (sh % (n));
    }

    cout<<"YES"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}