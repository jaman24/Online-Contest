#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
vector<pair<ll,ll>> level;
bool pos(ll x){
    ll px = 0, py = 0;
    for(auto [l,r]:level){
        ll p = max(0ll, px - x);
        ll q = py + x;
        if(r < p or q < l)return false;
        px  = max(l, p);
        py = min(r, q);
    }
    return true;
}
void solve(){
    level.clear();
    ll n;
    cin>>n;
    for(int i = 0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        level.push_back({x,y});
    }
    ll l = 0, r = 1e9 + 10;
    while (l < r)
    {
        ll mid = (l+r)/2;
        if(pos(mid)){
            r = mid;
        }
        else{
            l = mid + 1;
        }
    }
    cout<<r<<endl;
    

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}