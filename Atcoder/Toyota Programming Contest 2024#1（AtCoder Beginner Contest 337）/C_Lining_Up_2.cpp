#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        if(x == -1){
            a[0] = i;
        }
        else a[x] = i;
    }
    // for(auto x:a)cout<<x<<" ";
    // cout<<endl;
    ll ans[n];
    ans[0] = a[0] + 1;
    for(int i = 1; i < n; i++){
        ans[i] = a[ans[i-1]] + 1;
    }
    for(auto x:ans)cout<<x<<" ";
    cout<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}