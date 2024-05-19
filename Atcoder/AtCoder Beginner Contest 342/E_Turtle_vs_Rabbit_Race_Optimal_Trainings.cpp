#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
bool pos(ll mid, ll l, ll u, vector<ll>& pre){
    ll tot = pre[mid];
    if(l > 0)tot -= pre[l-1];
    if(tot <= u)return true;
    return false;
}
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    vector<ll> pre(n);
    pre[0] = v[0];
    for(int i = 1; i < n; i++){
        pre[i] = pre[i-1] + v[i];
    }
    ll q;
    cin>>q;
    while(q--){
        ll x, u;
        cin>>x>>u;
        x--;
        ll l = x, r = n-1;
        while(l < r){
            ll mid = (l + r + 1)/2;
            if(pos(mid, x, u, pre)){
                l = mid;
            }
            else r = mid - 1;
        }
        ll mx = INT_MIN, sec = pre[r];
        if(x > 0)sec -= pre[x-1];
        if(u <= sec){
            mx = (sec * (sec + 1))/2;
        }
        else{
            mx = (u * (u + 1))/2;
            ll t = sec - u - 1;
            mx -= (t * (t+1))/2;
        }
        ll mx1 = INT_MIN, sec1;
        if(r + 1 < n){
            sec1 = pre[r+1];
            if(x > 0)sec1 -= pre[x-1];
            mx1 = (u * (u + 1))/2;
            ll t = sec1 - u - 1;
            mx1 -= (t * (t+1))/2;
        }
        if(mx >= mx1)cout<<r+1<<" ";
        else cout<<r+2<<" ";
    }
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