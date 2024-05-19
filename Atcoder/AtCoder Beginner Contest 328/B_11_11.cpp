#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll m[n];
    for(auto &x:m)cin>>x;
    ll ans = 0;
    for(int i = 0;i<n;i++){
        for(int j = 1;j<=m[i];j++){

            set<ll> st;
            ll x = i+1;
            ll y = j;
            while(x){
                st.insert(x%10);
                x/=10;
            }
            while(y){
                st.insert(y%10);
                y/=10;
            }
            if(st.size()==1){
                ans++;
            }
        }
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