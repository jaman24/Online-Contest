#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back({x,i+1});
    }
    sort(v.begin(),v.end());
    ll ans[n];
    for(int i=0;i<v.size();i++){
        // cout<<v[i].first<<" "<<v[i].second<<endl;;
        ans[v[i].second -1]=n-i;
    }
    for(auto x:ans)cout<<x<<" ";
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