#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    vector<vector<ll>> adj(n+1);
    for(int i = 1; i <= n; i++)adj[i].push_back(0);
    for(int i = 1; i <= n; i++){
        ll x;
        cin>>x;
        adj[x].push_back(i);
    }
    for(int i = 1; i <= n; i++)adj[i].push_back(n+1);
    ll ans = INT_MAX, id = -1;
    for(int i  = 1; i <= n; i++){
        ll te = 0;
        for(int j = 0; j < adj[i].size() - 1; j++){
            ll di = adj[i][j+1] - adj[i][j] - 1;

            if(j != 0 and j + 2 != adj[i].size()){
                di = (di + 1)/2;
            }

            te = max(di, te);
        }
        if(ans > te){
            ans = te;
            id = i;
        }
    }
    cout<<id<<" "<<ans<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}