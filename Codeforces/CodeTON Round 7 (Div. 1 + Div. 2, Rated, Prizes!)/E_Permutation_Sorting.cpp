#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
const ll N = 2000005;
ll tree[4 * N] = {0};
void update(int node, int l, int r, int id, int val){
    if(l == r){
        tree[node] = val;
        return;
    }
    int mid = (l+r)/2;
    if(mid >= id){
        update(node+node, l, mid, id, val);
    }
    else update(node+node+1, mid+1, r, id, val);

    tree[node] = tree[node+node] + tree[node+node+1];
}
ll query(int node, int l, int r, int x,int y){
    if(y < l or r < x){
        return 0;
    }
    if(x <= l and r <= y){
        return tree[node];
    }
    int mid = (l + r)/2;
    return query(node + node, l, mid, x, y) + query(node+node+1, mid+1, r, x, y);
}
void solve(){
    memset(tree, 0, sizeof tree);
    ll n;
    cin>>n;
    ll a[n];
    vector<pair<ll,pair<ll,ll>>> v(n);
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        x--;
        if(x > i){
            v[x] = {i,{x, x}};
        }
        else if(i == x)v[x] = {i, {x, x}};
        else{
            ll z = n + x;
            v[x] = {i, {z, x}};
        }
    }
    sort(v.begin(),v.end());
    // for(auto [x,y]:v)cout<<x<<" "<<y.first<<" "<<y.second<<endl;
    // cout<<endl;
    ll ans[n];
    for(int i = n-1; i >= 0; i--){
        ll l = v[i].first + 1;
        ll r = v[i].second.first + 1;
        ll id = v[i].second.second;

        ll x = query(1, 1, 2*n+10, l, r);
        cout<<id+1<<" "<<x<<endl;
        ans[id] = r - l - x;
        update(1, 1, 2*n+10, r, 1);
    }
    // for(int i = 0; i <= 16; i++)cout<<tree[i]<<" ";
    // cout<<endl;
    for(auto x:ans)cout<<x<<" ";
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