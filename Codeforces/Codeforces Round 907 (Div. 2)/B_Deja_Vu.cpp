#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n, q;
    cin>>n>>q;
    ll a[n],b[q];
    for(auto &x:a)cin>>x;
    for(auto &x:b)cin>>x;
    set<ll> st;
    vector<ll> v;
    v.push_back(b[0]);
    for(int i = 1; i < q; i++){
        if(b[i] < v.back()){
            v.push_back(b[i]);
        }
    }
    for(auto x:v){
        if(st.find(x) == st.end()){
            st.insert(x);
            for(int i = 0;i < n;i++){
                ll k = (1 << x);
                if(a[i]%k == 0){
                    a[i] += (1 << (x-1));
                }
            }
        }
    }
    for(auto x:a)cout<<x<<" ";
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