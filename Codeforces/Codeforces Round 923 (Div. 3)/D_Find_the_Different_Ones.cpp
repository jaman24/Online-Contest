#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N = 200010;
int tree[4*N];
int query(int node, int st, int en, int l, int r){
    if(r<st or l>en){
        return INT_MAX;
    }
    if(st>=l and en<=r) return tree[node];
    int mid = (st+en)/2;
    int q1=query(node+node,st,mid,l,r);
    int q2=query(node+node+1,mid+1,en,l,r);
    return min(q1 , q2);
}

void update(int node,int st,int en,int ind,int val){
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
    tree[node] = min (tree[node+node] , tree[node+node+1]);
}
int tree1[4*N];
int query1(int node, int st, int en, int l, int r){
    if(r<st or l>en){
        return 0;
    }
    if(st>=l and en<=r) return tree1[node];
    int mid = (st+en)/2;
    int q1=query1(node+node,st,mid,l,r);
    int q2=query1(node+node+1,mid+1,en,l,r);
    return max(q1, q2);
}

void update1(int node,int st,int en,int ind,int val){
    if(st==en){
        tree1[node] = val;
        return;
    }
    int mid = (st+en)/2;
    if(ind <= mid){
        update1(node+node,st,mid,ind,val);
    }
    else{
        update1(node+node+1,mid+1,en,ind,val);
    }
    tree1[node] = max(tree1[node+node] , tree1[node+node+1]);
}
void solve(){
    // for(int i = 0; i < 4*N; i++)tree[i] = INT_MAX;
    // memset(tree1, 0, sizeof tree1);

    ll n;
    cin>>n;
    map<int, vector<int>> mp;
    for(int i = 1; i <= n; i++){
        int x;
        cin>>x;
        mp[x].push_back(i);
        update(1, 1, N-1, i, x);
        update1(1, 1, N-1, i, x);
    }
    int q;
    cin>>q;
    while(q--){
        int l, r;
        cin>>l>>r;
        int x = query(1, 1, N-1, l, r);
        int y = query1(1, 1, N-1, l, r);
        // cout<<x<<" "<<y<<endl;
        if(x == y){
            cout<<"-1"<<" "<<"-1"<<endl;
        }
        else{
            int a = lower_bound(mp[x].begin(), mp[x].end(), l) - mp[x].begin();
            int b = lower_bound(mp[y].begin(), mp[y].end(), l) - mp[y].begin();
            int p = mp[x][a], q = mp[y][b];
            cout<<p<<" "<<q<<endl;
        }
    }
    cout<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}