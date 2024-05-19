#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 998244353;
void compres(vector<ll>& v){
    map<ll,ll> mp;
    for(int i = 0; i < v.size(); i++){
        mp[v[i]] = i;
    }
    ll i = 1;
    for(auto [x,y]:mp){
        v[y] = i;
        i++;
    }
}
const int N = (3 * 1e5) + 10;
int tree[4*N];
ll query(int node, int st, int en, int l, int r){
    if(r<st or l>en){
        return 0;
    }
    if(st>=l and en<=r) return tree[node];
    int mid = (st+en)/2;
    ll q1=query(node+node,st,mid,l,r);
    ll q2=query(node+node+1,mid+1,en,l,r);
    return q1+q2;
}

void update(int node,int st,int en,int ind,int val){
    if(st==en){
        tree[node] += val;
        return;
    }
    int mid = (st+en)/2;
    if(ind <= mid){
        update(node+node,st,mid,ind,val);
    }
    else{
        update(node+node+1,mid+1,en,ind,val);
    }
    tree[node]=tree[node+node] + tree[node+node+1];
}
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    compres(v);
    // for(auto x:v)cout<<x<<" ";
    // cout<<endl;
    memset(tree, 0, sizeof tree);
    ll dp[n+1];
    dp[0] = 0;
    for(int i = 1; i <= n; i++){
        ll Q = query(1,0,N-1,v[i-1]+1, N-1);
        // cout<<i<<" "<<dp[i-1]<<" "<<" "<<Q<<endl;
        if(Q){
            dp[i] = ((dp[i - 1] * Q) + 1) % MOD;
        }
        else{
            dp[i] = (dp[i-1] + 1) % MOD;
        }
        update(1,0,N-1,v[i-1],1);
    }
    cout<<dp[n]<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}