#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n], od[n],ev[n];
    for(auto &x:a)cin>>x;
    for(int i = 0; i < n; i++){
        if(i%2)a[i]*=-1;
    }
    map<ll,ll> mp;
    mp[0]++;
    mp[a[0]]++;
    for(int i = 1; i < n; i++){
        a[i] += a[i-1];
        mp[a[i]]++;
        if(mp[a[i]] > 1){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}