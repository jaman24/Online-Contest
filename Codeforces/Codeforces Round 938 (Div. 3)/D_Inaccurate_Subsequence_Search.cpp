#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n, m, k;
    cin>>n>>m>>k;
    vector<ll> v(n);
    map<ll, ll> mm, mp;
    for(auto &x:v)cin>>x;
    for(int i = 0; i < m; i++){
        ll x;
        cin>>x;
        mm[x]++;
    }
    multiset<ll> st;
    int j = 0, c = 0;
    for(int i = 0; i < m; i++){
        mp[v[i]]++;
        if(mp[v[i]] <= mm[v[i]]){
            c++;
        }
    }
    ll ans = 0;
    if(c >= k)ans++;
    // cout<<c<<endl;
    for(int i = m; i < n; i++){
        mp[v[j]]--;
        if(mp[v[j]] < mm[v[j]])c--;
        mp[v[i]]++;
        if(mp[v[i]] <= mm[v[i]])c++;
        if(c >= k)ans++;
        // cout<<j<<" "<<c<<endl;
        j++;
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