#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n], b[n];
    for(auto &x:a)cin>>x;
    for(auto &x:b)cin>>x;
    vector<pair<int, pair<int,int>>> v(n);
    for(int i = 0; i < n; i++){
        v[i] = {a[i] + b[i] - 1, {a[i]-1, b[i]-1}};
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(i%2){
            ans -= v[i].second.second;
        }
        else ans += v[i].second.first;
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