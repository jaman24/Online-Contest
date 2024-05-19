#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    n*=2;
    ll a[n];
    for(auto &x:a)cin>>x;
    sort(a,a+n);
    vector<pair<ll,ll>> v;
    for(int i = 0;i<n/2;i++){
        v.push_back({a[i],a[n-i-1]});
    }
    ll dis = 0;
    for(int i = 0;i+1<n/2;i++){
        dis += (abs(v[i].first - v[i+1].first) + abs(v[i].second - v[i+1].second));
    }
    cout<<dis<<endl;
    for(auto [x,y]:v){
        cout<<x<<" "<<y<<endl;
    }

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}