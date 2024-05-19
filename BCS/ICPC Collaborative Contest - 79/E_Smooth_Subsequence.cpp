#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N = 1000000;
int tree[4*N];
int query(int node, int st, int en, int l, int r){
    if(r<st or l>en){
        return 0;
    }
    if(st>=l and en<=r) return tree[node];
    int mid = (st+en)/2;
    int q1=query(node+node,st,mid,l,r);
    int q2=query(node+node+1,mid+1,en,l,r);
    return max(q1, q2);
}

void update(int node,int st,int en,int ind,int val){
    if(st==en){
        tree[node] = max(tree[node], val);
        return;
    }
    int mid = (st+en)/2;
    if(ind <= mid){
        update(node+node,st,mid,ind,val);
    }
    else{
        update(node+node+1,mid+1,en,ind,val);
    }
    tree[node] = max(tree[node+node] , tree[node+node+1]);
}
void solve(){
    memset(tree, 0, sizeof tree);
    ll n, d;
    cin>>n>>d;
    ll ans = 1;
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        ll l = max(1ll, x - d);
        ll r = x + d;
        ll y = query(1, 1, N, l, r) + 1;
        update(1, 1, N, x, y);
        ans = max(y, ans);

    }
    cout<<ans<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}