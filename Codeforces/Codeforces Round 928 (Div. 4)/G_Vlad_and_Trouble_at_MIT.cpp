#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll ans = 0;
void solve(){
    ll n;
    cin>>n;
    vector<vector<ll>> adj(n+1);
    for(int i = 2; i <= n; i++){
        ll x;
        cin>>x;
        adj[x].push_back(i);
        adj[i].push_back(x);
    }
    string s;
    cin>>s;
    for(int i = 0; i < n; i++){
        
    }
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}