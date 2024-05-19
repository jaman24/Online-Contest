#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n],b[n];
    for(auto &x:a)cin>>x;
    for(auto &x:b)cin>>x;
    // for(auto x:a)cout<<x<<" ";
    // cout<<endl;
    // for(auto x:b)cout<<x<<" ";
    // cout<<endl;
    ll m = (2*n)+1;
    ll c[m];
    ll e[m];
    memset(c,0,sizeof c);
    memset(e,0,sizeof e);

    ll d = 1;
    for(int i = 1;i<n;i++){
        if(a[i] != a[i-1]){
            c[a[i-1]] = max(c[a[i-1]],d);
            d = 0;
        }
        d++;
    }
    c[a[n-1]] = max(c[a[n-1]],d);
    d = 1;
    for(int i = 1;i<n;i++){
        if(b[i] != b[i-1]){
            e[b[i-1]] = max(e[b[i-1]],d);
            d = 0;
        }
        d++;
    }
    e[b[n-1]] = max(e[b[n-1]],d);
    ll ans = 0;
    for(int i=1;i<m;i++){
        ans = max(ans , c[i]+e[i]);
    }
    // for(auto x:c)cout<<x<<" ";
    // cout<<endl;
    // for(auto x:e)cout<<x<<" ";
    // cout<<endl;
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