#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,q;
    cin>>n>>q;
    ll ans = 0,pre = 0;
    for(int i=0;i<q;i++){
        ll x;
        cin>>x;
        ll d;
        d = x - pre - 1;
        pre = x;
        ans += (d * (d+1))/2;
    }
    ll d = n - pre;
    ans += (d * (d+1))/2;
    ll res = (n * (n+1))/2;
    cout<<res - ans;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}