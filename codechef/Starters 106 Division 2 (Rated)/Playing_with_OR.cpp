#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    map<ll,ll> mp;
    for(int i = 0;i<k;i++){
        if(a[i]%2)mp[a[i]]++;
    }
    ll ans = 0;
    if(mp.size())ans++;
    if(a[0]%2){
        mp[a[0]]--;
        if(mp[a[0]] == 0)mp.erase(a[0]);
    }
    for(int i=1;i<=n-k;i++){
        if(a[i+k-1]%2){
            mp[a[i+k-1]]++;
        }
        if(mp.size())ans++;
        if(a[i]%2){
            mp[a[i]]--;
            if(mp[a[i]] == 0)mp.erase(a[i]);
        }
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