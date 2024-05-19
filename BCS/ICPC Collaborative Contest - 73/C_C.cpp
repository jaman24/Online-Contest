#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n,m;
    cin>>n>>m;
    ll a[m];
    set<ll> st;
    for(int i=0;i<m;i++){
        cin>>a[i];
        st.insert(a[i]);
    }
    ll cur = 1;
    for(int i=0;i<m;i++){
        if(a[i]<cur){
            cout<<a[i]<<endl;
            st.erase(a[i]);
        }
        else{
            while(cur<a[i]){
                if(st.find(cur)==st.end()){
                    cout<<cur<<endl;
                }
                cur++;
            }
            cout<<a[i]<<endl;
        }
    }
    cur++;
    while(cur<=n){
        cout<<cur<<endl;
        cur++;
    }
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}