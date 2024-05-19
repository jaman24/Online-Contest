#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    map<ll,ll> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    sort(a,a+n);
    ll total = (n * (n-1))/2;

    // for(auto x:a)cout<<x<<" ";
    // cout<<endl;
    if(a[0] == 1){
        cout<<0<<endl;
        return;
    }
    ll ans[n+2] = {0};
    ll sub = 0;
    for(auto [x,y]:mp){
        ll i = x+x;
        while(i<=n){
            ans[i]+=y;
            i+=x;
        }
        sub+=(y*(y-1))/2;
    }
    for(int i=1;i<=n;i++){
        sub+=(ans[i] * mp[i]);
    }
    cout<<total - sub<<endl;
    
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}