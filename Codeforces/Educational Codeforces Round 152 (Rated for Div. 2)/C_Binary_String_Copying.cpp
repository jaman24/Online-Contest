#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll fa[n],la[n];
    ll z = 0;
    for(int i = 0;i<n;i++){
        if(s[i] == '0'){
            z = i;
        }
        fa[i] = z;
    }
    z = n-1;
    for(int i = n-1;i>=0;i--){
        if(s[i] == '1'){
            z = i;
        }
        la[i] = z;
    }
    set<pair<ll,ll>> st;
    bool f = false;
    while(k--){
        ll l,r;
        cin>>l>>r;
        l--,r--;
        ll x = la[l], y = fa[r];
        if(x < y){
            st.insert({x,y});
        }
        if(x >= y)f = true;
    }
    ll ans = st.size();
    if(f)ans++;
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