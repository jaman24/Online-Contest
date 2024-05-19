#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll x = 0,y = 0;
    set<pair<ll,ll>> st;
    ll x1,y1 = INT_MAX;
    for(int i = 0;i<n;i++){
        ll p,q;
        cin>>p>>q;
        if(st.find({p,q})==st.end()){
            st.insert({p,q});
            x+=p;
            y+=q;
            if(y1>q){
                x1 = p;
                y1 = q;
            }
        }
    }
    if(st.size()==2){
        cout<<x1<<" "<<y1<<endl;
        return;
    }
    ll s = st.size();
    ll a = x/s, b = y/s;
    cout<<a<<" "<<b<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}