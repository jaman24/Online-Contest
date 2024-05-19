#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n+1] = {0};
    ll ans = 0;
    vector<pair<ll,ll>> v(n+1);
    for(int i = 1;i<n;i++){
        ll x,y;
        a[y] = i;
        v[i] = {x,y};
    }
    set<ll> st;
    for(auto [x,y]:v){
        ll u = x,id = a[x];
        while(st.find(u) == st.end()){
            ans++;
            st.insert(u);
            st.insert(v[id].second);
            u = v[id].first;
            id = a[u];
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