#include<bits/stdc++.h>
// #define fast (st + en) / 2
using namespace std;

typedef long long int ll;
const ll N = 200005;
int tree[4 * N];
void update(int nd, int st, int en, int id, int val){
    if(st == en){
        tree[nd] = val;
        return;
    }
    int mid = (st + en) / 2;
    if(id <= mid){
        update(nd + nd, st, mid, id, val);
    }
    else{
        update(nd+nd+1, mid+1, en, id, val);
    }
    tree[nd] = max(tree[nd+nd], tree[nd + nd + 1]);
}
int getMax(int nd, int st, int en, int l, int r){
    if(r < st or en < l){
        return 0;
    }
    if(l <= st and en <= r){
        return tree[nd];
    }
    int mid = (st + en) / 2;
    return max(getMax(nd + nd, st, mid, l, r), getMax(nd + nd + 1, mid+1, en, l, r));
}
vector<ll> compress(ll n, vector<ll>& a){
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        arr[i] = a[i];
    }
    sort(arr.begin(),arr.end());
    map<ll, ll> mp;
    int id = 1;
    for(int i = 0; i < n; i++){
        if(mp.find(arr[i]) == mp.end()){
            mp[arr[i]] = id;
            id++;
        }
    }
    vector<ll> ans(n);
    for(int i = 0; i < n; i++){
        ans[i] = mp[a[i]];
    }
    return ans;
}
void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(auto &x:a)cin>>x;
    vector<ll> ca = compress(n, a);
    ll ans = 0;
    memset(tree, 0, sizeof tree);
    for(int i = 0; i < n; i++){
        ll Q = getMax(1, 1, N, 1, ca[i] - 1);
        ans = max(ans, Q + 1);
        update(1, 1, N, ca[i], Q + 1);
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