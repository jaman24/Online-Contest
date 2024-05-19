#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    map<ll,ll> last;
    for(int i = 0;i < n; i++){
        last[v[i]] = i;
    }
    set<ll> fast;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(!fast.count(v[i])){
            fast.insert(v[i]);
        }
        if(last[v[i]] == i){
            ans += fast.size();
        }
    }
    cout<<ans<<"\n";
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}