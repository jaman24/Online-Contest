#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n, x, y;
    cin>>n>>x>>y;
    vector<ll> v(x);
    for(auto &z:v)cin>>z;
    sort(all(v));
    ll ans = 0;
    for(int i = 1; i < x; i++){
        if(i == 1){
            if(v[i] - v[i-1] == 2){
                ans++;
            }
        }
        else{
            if(v[i] - v[i-1] == 2){
                ans += 2;
            }
            else ans += 1;
        }
    }
    if(abs(v[0] - v[x-1]) == n-2)ans += 1;
    // cout<<ans<<endl;
    vector<ll> zor, bor;
    for(int i = 1; i < x; i++){
        ll dis = v[i] - v[i-1];
        if(dis > 2){
            if(dis%2)bor.push_back(dis);
            else zor.push_back(dis);
        }
        // cout<<dis<<" ";
    }
    ll dis = n - v[x-1] + v[0];
    if(dis > 2){
        if(dis%2)bor.push_back(dis);
        else zor.push_back(dis);
    }
    // cout<<dis<<endl;
    sort(all(zor));
    sort(all(bor));
    for(auto z:zor){
        ll rem = z - 4;
        if(y >= rem/2){
            ans += rem;
            y -= (rem/2);
        }
        else{
            ans += y * 2;
            y = 0;
        }
        if(y > 0){
            ans += 3;
            y--;
        }
    }
    for(auto z:bor){
        ll rem = z;
        if(y >= rem/2){
            ans += rem-1;
            y -= (rem/2);
        }
        else{
            ans += y * 2;
            y = 0;
        }
    }
    cout<<ans<<endl;
    
    
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