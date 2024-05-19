#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    set<pair<ll,ll>> st;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        ll c=0;
        for(auto x:s){
            if(x=='o')c++;
        }
        st.insert({n-c,i});
    }
    for(auto [x,y]:st)cout<<y<<" ";
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