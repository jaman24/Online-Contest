#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v;
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        v.push_back({x, i});
    }
    sort(v.begin(), v.end());
    ll pre[n];
    pre[0] = v[0].first;
    for(int i = 1; i < n; i++){
        pre[i] = pre[i-1] + v[i].first;
    }
    ll ans[n];
    for(int i = 0;i<n;i++){
        ans[i] = i;
    }
    ll c = 0;
    for(int i = n-2; i >= 0; i--){
        if(pre[i] >= v[i+1].first){
            c++;
            ans[i] += c;
        }
        else{
            c = 0;
        }
    }
    ll res[n];
    for(int i = 0; i < n; i++){
        res[v[i].second] = ans[i];
    }
    for(auto x:res)cout<<x<<" ";
    cout<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}