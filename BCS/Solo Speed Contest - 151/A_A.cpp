#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n;
    cin>>n;
    map<double, pair<int, pair<int, int>>> mp;
    for(int i = 0; i < n; i++){
        ll a, b, c;
        cin>>a>>b>>c;
        double p = (a+b+c)/2.0;
        double x = p * (p - a) * (p - b) * (p - c);
        x = sqrt(x);
        mp[x] = {a, {b, c}};
    }
    for(auto [x,y]:mp){
        cout<<y.first<<" "<<y.second.first<<" "<<y.second.second<<endl;
    }
}
int main(){
    FastIO;
    int cn = 1;
    // cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}