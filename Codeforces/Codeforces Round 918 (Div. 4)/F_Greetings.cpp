#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N = 200010;
int tree[4*N];
int query(int node, int st, int en, int l, int r){
    if(r<st or l>en){
        return 0;
    }
    if(st>=l and en<=r) return tree[node];
    int mid = (st+en)/2;
    int q1=query(node+node,st,mid,l,r);
    int q2=query(node+node+1,mid+1,en,l,r);
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
    memset(tree, 0, sizeof tree);
    int n;
    cin>>n;
    vector<pair<int,int>> temp(n), v(n);
    for(int i = 0; i < n; i++){
        int x, y;
        cin>>x>>y;
        temp[i] = {y, x};
    }
    sort(temp.begin(), temp.end());
    int id = 1;
    for(int i = 0; i < n; i++){
        v[i] = {temp[i].second, id};
        id++;
    }
    sort(v.begin(), v.end());
    // for(auto [x,y] : v)cout<<x<<" "<<y<<endl;
    // cout<<endl;
    ll ans = 0;
    for(int i = n-1; i >= 0; i--){
        int x = query(1,0,N-1,0,v[i].second);
        ans += x;
        update(1,0,N-1,v[i].second,1);
    }
    cout<<ans<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}