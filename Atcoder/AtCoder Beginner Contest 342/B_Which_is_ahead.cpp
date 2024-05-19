#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

void solve(){
    ll n,q;
    cin>>n;
    vector<ll> v(n);
    map<ll,ll> mp;
    for(int i = 1; i <= n; i++){
        ll x;
        cin>>x;
        mp[x] = i;
    }
    cin>>q;
    while(q--){
        ll x, y;
        cin>>x>>y;
        if(mp[x] > mp[y]){
            cout<<y<<endl;
        }
        else{
            cout<<x<<endl;
        }
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