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
    ll ans = 0,t=0;
    map<ll,ll> mp;
    vector<ll> v;
    for(int i = 0;i<n;i++){
        mp[a[i]+b[i]] = i;
        ans += abs(a[i] - b[i]);
        if(a[i]==b[i]){
            v.push_back(a[i]);
        }
    }
    sort(v.begin(),v.end());
    t = ans;
    if(v.size()){
        t += (v.back() * 2) - (v[0]*2);
    }
    ll id1 = mp.rbegin() ->second;
    ll id2 = mp.begin() ->second;
    ans -= abs(a[id1] - b[id1]);
    ans -= abs(a[id2] - b[id2]);
    swap(b[id1],b[id2]);
    ans += abs(a[id1] - b[id1]);
    ans += abs(a[id2] - b[id2]);
    // cout<<id2<<" "<<id1<<endl;
    cout<<max(ans,t)<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}