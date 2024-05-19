#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>
const int N = 500010;
ll tree[4*N];
ll query(int node, int st, int en, int l, int r){
    if(r<st or l>en){
        return 0ll; // Change it
    }
    if(st>=l and en<=r) return tree[node];
    int mid = (st+en)/2;
    ll q1=query(node+node,st,mid,l,r);
    ll q2=query(node+node+1,mid+1,en,l,r);
    return max(q1, q2); // Change it
}

void update(int node,int st,int en,int ind,ll val){
    if(st==en){
        tree[node] = max(val, tree[node]); // Change it
        return;
    }
    int mid = (st+en)/2;
    if(ind <= mid){
        update(node+node,st,mid,ind,val);
    }
    else{
        update(node+node+1,mid+1,en,ind,val);
    }
    tree[node]=max(tree[node+node], tree[node+node+1]); // Change it
}
bool cmp(pair<pair<int, int>, int>& a, pair<pair<int, int>, int>& b){
    return a.first.second < b.first.second;
}
void solve(){
    int n;
    cin>>n;
    vector<pair<pair<int, int>, int>> st_end(n);
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int x, y, z;
        cin>>x>>y>>z;
        mp[x]++;
        mp[y]++;
        st_end[i] = {{x, y}, z};
    }
    int id = 1;
    map<int, int> com;
    for(auto [x,y]:mp){
        com[x] = id++;
    }
    for(int i = 0; i < n; i++){
        st_end[i].first.first = com[st_end[i].first.first];
        st_end[i].first.second = com[st_end[i].first.second];
    }
    sort(all(st_end), cmp);
    memset(tree, 0, sizeof tree);
    for(int i = 0; i < n; i++){
        int l = 0, r = st_end[i].first.first - 1, p = st_end[i].first.second;
        ll x = query(1, 0, id-1, l, r) + st_end[i].second;
        update(1, 0, id-1, p, x);
    }
    ll ans = query(1, 0, id-1, 0, id-1);
    cout<<ans<<endl;

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