#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
const ll N=2e5 + 10;
ll arr[N];
ll tree[4*N];
void build(int node , int st, int en){
    if(st == en){
        tree[node]=arr[st];
        return;
    }
    int mid = (st+en)/2;
    build(node+node , st , mid);
    build(node+node+1 , mid+1 , en);
    tree[node]=(tree[node+node] & tree[node+node+1]);
}

int query(int node , int st, int en, int l, int r){
    
    if(r<st or en<l){
        return INT_MAX;
    }
    if(l<=st and en<=r){
        return tree[node];
    }
    int mid = (st+en)/2;
    int q1=query(node+node,st,mid,l,r);
    int q2=query(node+node+1,mid+1,en,l,r);
    return (q1 & q2);
}

void solve(){
    ll n,q;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    build(1,0,n-1);
    // for(ll i=1;i<4*n;i++)cout<<tree[i]<<" ";
    // cout<<endl;
    cin>>q;
    while(q--){
        ll l,r,k;
        cin>>l>>k;
        // cout<<l<<" "<<k<<endl;
        ll left = l-1,right = n-1;
        while(left<right){
            ll mid = left+(right-left+1)/2;
            ll ans = query(1,0,n-1,l-1,mid);
            // cout<<mid<<" mid-->"<<ans<<"  left -->"<<left<<endl;
            if(ans<k){
                right=mid-1;
            }
            else left = mid;
        }
        // ll x = query(1,0,n-1,l-1,left);
        // cout<<x<< " ";
        if(query(1,0,n-1,l-1,left) < k ){
            cout<<-1<<" ";
        }
        else{
            cout<<left+1<<" ";
        }
        // cout<<endl;
    }
    cout<<endl;
}
int main(){
    ll cn = 1,ca=1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}