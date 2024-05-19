#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,m;
    cin >> n >> m;
    vector<pair<ll,ll>> v;
    for(int i = 0; i < n; i++){
        ll x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    // for(auto z : v){
    //     cout<<z.first<<" "<<z.second<<endl;
    // }
    ll point=v[0].second;
    ll ans=point;
    int j=0;
    for(int i=1;i<n;i++){
        if(abs(v[j].first-v[i].first)<m){
            point+=v[i].second;
        }
        else{
            while(abs(v[i].first-v[j].first)>=m && j<i){
                point-=v[j].second;
                j++;
            }
            point+=v[i].second;
        }
        ans=max(ans,point);
 
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