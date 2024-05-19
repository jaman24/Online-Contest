#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
bool pos(ll k, ll s, vector<ll> &v, ll n){
    vector<ll> t(n);
    for(int i = 0; i < n; i++){
        t[i] = v[i] + ((i+1) * k);
    }
    sort(all(t));
    ll sum = 0;
    for(int i = 0; i < k; i++)sum += t[i];
    if(sum > s)return false;
    return true;
}
void solve(){
    ll n, s;
    cin>>n>>s;
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    ll l = 0, r = n;
    while(l < r){
        ll mid = (l + r + 1)/2;
        if(pos(mid, s, v, n)){
            l = mid;
        }
        else r = mid - 1;
    }
    for(int i = 0; i < n; i++){
        v[i] += ((i+1) * l); 
    }
    sort(all(v));
    ll sum = 0;
    for(int i = 0; i < l; i++){
        sum += v[i];
    }
    cout<<l<<" "<<sum<<endl;
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