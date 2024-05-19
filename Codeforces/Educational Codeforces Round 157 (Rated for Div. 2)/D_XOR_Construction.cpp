#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    ll a[n-1];
    ll mx = -1,id = -1;
    for(int x = 0;x < n-1; x++){
        cin>>a[x];
        if(mx < a[x]){
            mx = a[x];
            id = x;
        }
    }

    ll ans[n];
    ans[id] = n-1;
    // cout<<id<<endl;
    ll l = id-1, r = id + 1;
    while(l >= 0){
        ans[l] = a[l+1] ^ ans[l+1];
        // cout<<a[l]<<" "<<ans[l]<<endl;
        l--;
    }
    while(r < n){
        ans[r] = a[r-1] ^ ans[r-1];
        // cout<<a[r-1]<<" "<<ans[r-1]<<endl;
        r++;
    }
    for(auto x:ans)cout<<x<<" ";
    cout<<endl;
    bool f = true;
    set<ll> st;
    for(int i = 0;i<n-1;i++){
        if((ans[i] ^ ans[i+1]) != a[i] or ans[i] >= n){
            f = false;
            break;
        }
        st.insert(ans[i]);
    }
    st.insert(ans[n-1]);
    if(st.size() == n and f){
        for(auto x:ans)cout<<x<<" ";
        cout<<endl;
        return;
    }
    id += 1;
    ans[id] = n-1;
    cout<<id<<endl;
    ans[id] = n-1;
    // cout<<id<<endl;
    l = id-1, r = id + 1;
    while(l >= 0){
        ans[l] = a[l] ^ ans[l+1];
        // cout<<a[l]<<" "<<ans[l]<<endl;
        l--;
    }
    while(r < n){
        ans[r] = a[r-1] ^ ans[r-1];
        // cout<<a[r-1]<<" "<<ans[r-1]<<endl;
        r++;
    }
    for(auto x:ans)cout<<x<<" ";
    cout<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}