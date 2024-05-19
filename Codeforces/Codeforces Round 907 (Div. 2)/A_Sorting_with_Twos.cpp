#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(auto &x:a)cin>>x;
    bool f = true;
    set<ll> st;
    for(int i = 0;i<n-1;i++){
        if(a[i]>a[i+1]){
            st.insert(i+1);
        }
    }
    ll k = 1;
    while(k <= n){
        if(st.find(k)!=st.end()){
            st.erase(k);
        }
        k = (k << 1);
    }
    if(st.size()){
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}