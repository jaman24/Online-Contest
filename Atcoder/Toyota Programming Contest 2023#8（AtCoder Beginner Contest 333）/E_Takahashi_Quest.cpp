#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    map<ll,ll> type;
    vector<pair<ll,ll>> v;
    for(int i = 0; i < n; i++){
        ll x,y;
        cin>>x>>y;
        type[y] = 0;
        v.push_back({x,y});
    }
    vector<ll> res;
    int ans = 0;
    int c = 0;
    for(int i = n-1; i >= 0; i--){
        int x = v[i].first, y = v[i].second;
        if(x == 1){
            if(type[y] > 0){
                res.push_back(1);
                type[y]--;
                c--;
            }
            else{
                res.push_back(0);
            }
        }
        else{
            type[y]++;
            c++;
            ans = max(ans, c);
        }
    }
    bool f = true;
    for(auto [x,y]:type){
        if(y > 0){
            f = false;
            break;
        }
    }
    if(!f){
        cout<<"-1"<<endl;
        return;
    }
    cout<<ans<<endl;
    reverse(res.begin(), res.end());
    for(auto x:res)cout<<x<<" ";
    cout<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}