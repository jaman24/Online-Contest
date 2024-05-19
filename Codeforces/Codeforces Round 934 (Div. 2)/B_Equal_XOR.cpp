#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n, k;
    cin>>n>>k;
    map<int, int> mp, mq;
    int p = 0, p1 = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        mp[x]++;
        if(mp[x] == 2)p++;
    }
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        mq[x]++;
        if(mq[x] == 2)p1++;
    }
    int pp = min(p, p1);

    vector<int> ans, res;
    int c = k, d = 0;
    for(auto [x,y]:mp){
        if(y == 2 and d < c and d < pp){
            ans.pb(x);
            ans.pb(x);
            d++;
        }
    }
    d = 0;
    for(auto [x,y]:mq){
        if(y == 2 and d < c and d < pp){
            res.pb(x);
            res.pb(x);
            d++;
        }
    }
    for(auto [x,y]:mp){
        if(y == 1 and ans.size() < 2*k){
            ans.pb(x);
            res.pb(x);
        }
    }
    for(auto x:ans)cout<<x<<" ";
    cout<<endl;
    for(auto x:res)cout<<x<<" ";
    cout<<endl;
}
int main(){
    FastIO;
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}