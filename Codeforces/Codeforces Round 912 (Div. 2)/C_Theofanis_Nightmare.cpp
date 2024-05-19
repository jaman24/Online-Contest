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
    ll pre[n];
    pre[n-1] = a[n-1];
    for(int i=n-2;i>=0;i--)pre[i] = pre[i+1]+a[i];
    ll ans = pre[0];
    for(int i=1;i<n;i++){
        if(pre[i]>0)ans+=pre[i];
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