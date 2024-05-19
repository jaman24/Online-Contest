#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,a,b;
    cin>>n>>a>>b;
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    map<ll,vector<int>> mp;
    for(int i = 0; i < n; i++){
        mp[v[i]%a].push_back(i);
    }
    ll ans = 0;

    for(auto [x,y]:mp){
        map<ll,ll> mq;
        if(x == 0 or (x == a/2 and a%2 == 0)){
            for(auto p:y){
                mq[v[p]%b]++;
            }
            for(auto [p, q]:mq){
                ans += (q * (q-1))/2;
            }
            continue;
        }
        if(x > (a/2))break;
        ll z = a - x;
        if(mp.find(z) != mp.end()){
            for(auto p:y){
                mq[v[p]%b]++;
            }
            for(auto p:mp[z]){
                ans += mq[v[p]%b];
            }
        }
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
/*
6 5 2
5 - 1 2 2 4 4 1
    1 2 7 4 9 6
2 - 1 0 1 0 1 0

4+1
9 - 1
7 - 1
2 - 0
23 - 3
11 - 1
12 - 2

*/