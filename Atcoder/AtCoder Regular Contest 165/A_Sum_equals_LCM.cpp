#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll id = n-k;
    // cout<<id<<endl;
    set<ll> t;
    for(int j=0;j<k-1;j++){
        t.insert(v[j]);
    }
    for(int i=k-1;i<n;i++){
        t.insert(v[i]);
        if(i-k+1>0){
            t.erase(v[i-k]);
        }
        if(*t.begin()==v[i-k+1] and *t.rbegin() == v[i]){
            id = i-k+1;
        }
    }
    set<ll> st;
    for(int i=id;i<id+k;i++)st.insert(v[i]);
    while(id-1>=0){
        st.erase(v[id+k-1]);
        st.insert(v[id-1]);
        if(*st.begin() == v[id-1]){
            id--;
        }
        else break;
    }
    for(int i=0;i<id;i++)cout<<v[i]<<" ";
    vector<ll> tt;
    for(int i=id;i<id+k;i++)tt.push_back(v[i]);
    sort(tt.begin(),tt.end());
    for(auto x:tt)cout<<x<<" ";
    for(int i=id+k;i<n;i++)cout<<v[i]<<" ";
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