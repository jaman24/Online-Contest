#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    vector<int> v(n*2);
    for(auto &x:v)cin>>x;
    map<int, vector<int>> mp;
    for(int i = 0; i < n*2; i++){
        mp[v[i]].push_back(i);
    }
    vector<pair<int,int>> a;
    for(auto [x,y]:mp){
        int p = abs(y[0] - y[1]);
        a.push_back({p, x});
    }
    sort(a.begin(), a.end());
    for(int i = n-1; i >= 0; i--){
        cout<<a[i].second<<" ";
    }
    cout<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}