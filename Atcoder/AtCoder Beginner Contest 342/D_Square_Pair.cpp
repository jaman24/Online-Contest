#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
const ll N = 200010;
vector<ll> p;
bool vis[N] = {false};
void prime(){
    for(ll i = 2; i * i < N; i++){
        if(!vis[i]){
            p.pb(i);
            for(ll j = i + i; j < N; j += i)vis[j] = true;
        }
    }
    for(ll i = 2; i  < N; i++){
        if(!vis[i]){
            p.pb(i);
        }
    }
}
vector<ll> cal(ll n){
    vector<ll> ans;
    int i = 0;
    while(n > 1){
        int c = 0;
        while(n%p[i] == 0){
            n /= p[i];
            c++;
        }
        if(c%2)ans.push_back(p[i]);
        i++;
    }
    return ans;
}
void solve(){
    ll n;
    cin>>n;
    ll z = 0;
    ll ans = 0;
    map<vector<ll>, ll> mp;
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        if(x == 0){
            z++;
            continue;
        }
        auto v = cal(x);
        ans += mp[v];
        mp[v]++;
    }
    ll rem = n-z;
    ans += (rem*z);
    ans += (z*(z-1))/2;
    cout<<ans<<endl;

}
int main(){
    FastIO;
    prime();
    int cn = 1;
    // cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}