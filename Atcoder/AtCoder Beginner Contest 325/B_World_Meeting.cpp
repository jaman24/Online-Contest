#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v;
    for(int i=0;i<n;i++){
        ll c,w;
        cin>>c>>w;
        v.push_back({c,w});
    }
    ll ans = 0;
    for(int i=1;i<24;i++){
        ll mx = 0;
        for(int j=0;j<n;j++){
            if((i+v[j].second)%24 < 18 and (i+v[j].second)%24 > 8){
                mx+=v[j].first;
            }
        }
        ans = max(mx,ans);
    }
    cout<<ans<<endl;

}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}