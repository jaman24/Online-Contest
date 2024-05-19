#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N = 300010;
pair<int, int> tree[4*N];
pair<int, int> query(int node, int st, int en, int l, int r){
    if(r<st or l>en){
        return {INT_MIN, INT_MAX};
    }
    if(st>=l and en<=r) return tree[node];
    int mid = (st+en)/2;
    auto q1 = query(node+node,st,mid,l,r);
    auto q2 = query(node+node+1,mid+1,en,l,r);
    pair<int, int> ans;
    ans.first = max(q1.first, q2.first);
    ans.second = min(q1.second, q2.second);
    return ans;
}

void update(int node,int st,int en,int ind,int val){
    if(st==en){
        tree[node] = {val, val};
        return;
    }
    int mid = (st+en)/2;
    if(ind <= mid){
        update(node+node,st,mid,ind,val);
    }
    else{
        update(node+node+1,mid+1,en,ind,val);
    }
    tree[node].first = max(tree[node+node].first, tree[node+node+1].first);
    tree[node].second = min(tree[node+node].second, tree[node+node+1].second);
}
bool pos(int l, int r, int val, vector<ll>& pre, int n){
    ll tot = pre[r];
    if(l > 0)tot -= pre[l-1];
    auto a = query(1, 0, n-1, l, r);
    if((a.first != a.second and tot > val) or a.first > val)return true;
    return false;
}

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<ll> pre(n);
    for(auto &x:v)cin>>x;
    pre[0] = v[0];
    update(1, 0, n-1, 0, v[0]);
    for(int i = 1; i < n; i++){
        update(1, 0, n-1, i, v[i]);
        pre[i] = pre[i-1] + v[i];
    }
    for(int i = 0; i < n; i++){
        int ans = INT_MAX;
        if(i != 0){
            int l = 0, r = i-1;
            while(l < r){
                int mid = l + (r - l + 1)/2;
                if(pos(mid, i-1, v[i], pre, n)){
                    l = mid;
                }
                else{
                    r = mid-1;
                }
            }
            if(pos(l, i-1, v[i], pre, n))ans = min(ans, i - l);
        }
        
        if(i != n-1){
            int l = i+1, r = n-1;
            while(l < r){
                int mid = l + (r-l)/2;
                if(pos(i+1, mid, v[i], pre, n)){
                    r = mid;
                }
                else{
                    l = mid+1;
                }
            }
            if(pos(i+1, l, v[i], pre, n))ans = min(ans, r - i);
        }
        if(ans == INT_MAX){
            cout<<"-1"<<" ";
        }
        else{
            cout<<ans<<" ";
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