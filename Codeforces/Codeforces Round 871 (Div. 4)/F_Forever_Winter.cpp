#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> adj(n+1);
    for(int i = 0;i<m;i++){
        ll x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    ll leef = 0;
    ll leef_root = -1;
    for(int i = 1;i<=n;i++){
        if(adj[i].size()==1){
            leef++;
            leef_root = adj[adj[i][0]].size();
        }
    }
    leef_root -- ;
    
    cout<<leef/leef_root<<" "<<leef_root<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}