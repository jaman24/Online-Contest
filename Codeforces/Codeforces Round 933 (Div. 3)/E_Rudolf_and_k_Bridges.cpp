#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
const int N = 200010;
ll tree[4*N];
ll query(int node, int st, int en, int l, int r){
    if(r<st or l>en){
        return LLONG_MAX;
    }
    if(st>=l and en<=r) return tree[node];
    int mid = (st+en)/2;
    ll q1=query(node+node,st,mid,l,r);
    ll q2=query(node+node+1,mid+1,en,l,r);
    return min(q1, q2);
}

void update(int node,int st,int en,int ind,ll val){
    if(st==en){
        tree[node] = val;
        return;
    }
    int mid = (st+en)/2;
    if(ind <= mid){
        update(node+node,st,mid,ind,val);
    }
    else{
        update(node+node+1,mid+1,en,ind,val);
    }
    tree[node] = min(tree[node+node], tree[node+node+1]);
}
void solve(){
    int n, m, k, d;
    cin>>n>>m>>k>>d;
    ll mincost[n];
    ll dept[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>dept[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int b = 0; b < 4*m; b++)tree[b] = LLONG_MAX;
        update(1, 0, m-2, 0, 1);
        for(int j = 1; j < m-1; j++){
            int l = max(0, j - d - 1);
            int r = j - 1;
            ll cost = query(1, 0, m-2, l, r);
            update(1, 0, m-2, j, cost+dept[i][j]+1);
            // cout<<l<<" "<<r<<" "<<cost<<endl;
        }
        int l = max(0, m-2-d);
        ll x = query(1, 0, m-2, l, m-2);
        mincost[i] = x+1;
        // cout<<x<< " "<<l<<" "<<m-2<<endl;
    }
    ll ans = LLONG_MAX;
    for(int i = 1; i < n; i++){
        // cout<<mincost[i]<<" ";
        mincost[i] += mincost[i-1];
    }
    // cout<<endl;
    for(int i = k-1; i < n; i++){
        ll l = i - k;
        ll sum = mincost[i];
        if(l >= 0)sum -= mincost[l];
        ans = min(ans, sum);
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