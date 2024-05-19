#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<pair<ll,ll>> v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i].first>>v[i].second;
    }
    ll ans = abs(v[a].first-v[b].first)+abs(v[a].second-v[b].second);
    ll xm=LLONG_MAX/2,ym=LLONG_MAX/2;
    for(int i=1;i<=k;i++){
        xm =min(xm, abs(v[a].first-v[i].first)+abs(v[a].second-v[i].second));
        ym =min(ym, abs(v[i].first-v[b].first)+abs(v[i].second-v[b].second));
    }
    // cout<<"ans-->"<<ans<<endl;
    // cout<<xm<<" "<<ym<<endl;
    ans = min(ans,xm+ym);
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