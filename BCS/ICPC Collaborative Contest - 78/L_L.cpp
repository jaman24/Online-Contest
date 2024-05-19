#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    set<ll> st;
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        st.insert(x);
    }
    while(true){
        bool f = true;
        ll x = *st.rbegin();
        ll y = x;
        while(x > 1){
            x /= 2;
            if(st.find(x) == st.end()){
                st.insert(x);
                f = false;
                break;
            }
        }
        if(f)break;
        st.erase(y);
    }
    for(auto x:st)cout<<x<<" ";
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