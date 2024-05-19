#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n,m,k;
ll u[30],v[30],w[30];
ll mn = LLONG_MAX;
bool vis[10] = {false};
void dfs(ll root,vector<vector<ll>> &adj){
    vis[root] = true;
    for(auto x:adj[root]){
        if(!vis[x])dfs(x,adj);
    }
}
void solve1(vector<ll> &data){
    vector<vector<ll>> adj(n+1);
    ll sum = 0;
    for(auto x:data){
        adj[u[x]].push_back(v[x]);
        adj[v[x]].push_back(u[x]);
        sum += w[x];
    }
    memset(vis,false,sizeof vis);
    dfs(1,adj);
    bool f = true;
    for(int i = 1;i<=n;i++){
        if(!vis[i]){
            f = false;
        }
    }
    if(f){
        mn = min(mn , sum%k);
    }
}

void combinationUtil(vector<ll> &arr, ll n, ll r, ll index, vector<ll> &data, ll i) 
{ 
    if (index == r) 
    { 
        solve1(data);
        return; 
    } 
 
    if (i >= n) 
        return; 
 
    data[index] = arr[i]; 

    combinationUtil(arr, n, r, index + 1, data, i + 1); 
 
    combinationUtil(arr, n, r, index, data, i+1); 
}

void printCombination(vector<ll> &arr, ll n, ll r) 
{ 
    vector<ll> data(r);

    combinationUtil(arr, n, r, 0, data, 0); 
}  

void solve(){
    cin>>n>>m>>k;

    for(int i = 0;i<m;i++){
        cin>>u[i]>>v[i]>>w[i];
    }
    vector<ll> arr(m);
    for(int i = 0;i<m;i++)arr[i] = i;
    printCombination(arr, m, n-1);
    
    cout<<mn<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}