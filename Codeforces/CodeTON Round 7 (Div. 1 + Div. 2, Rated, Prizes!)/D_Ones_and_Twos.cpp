#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll q;
    cin>>q;
    ll a[n];
    set<ll> st;
    ll sum = 0;
    for(int i = 0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)st.insert(i);
        sum += a[i];
    }
    ll mx;
    if(st.size()){
        ll fid = *st.begin();
        auto it = st.end();
        it--;
        ll lid = *it;
        mx = max(sum-(2*(fid)), sum-(2*(n-lid-1)));
    }
    else mx = 0;   
    // cout<<mx<<endl;

    while(q--){
        ll op;
        cin>>op;
        if(op == 1){
            ll s;
            cin>>s;
            if(s <= mx or (s % 2 == mx % 2 and s <= sum)){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else{
            ll u,v;
            cin>>u>>v;
            u--;
            if(a[u] == v)continue;
            if(a[u] == 1){
                a[u] = 2;
                st.erase(u);
                sum += 1;
            }
            else{
                a[u] = 1;
                st.insert(u);
                sum -= 1;
            }
            if(st.size()){
                ll fid = *st.begin();
                auto it = st.end();
                it--;
                ll lid = *it;
                mx = max(sum-(2*(fid)), sum-(2*(n-lid-1)));

            }
            else mx = 0;
        }
    }
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}