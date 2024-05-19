#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    vector<ll> ans;
    ll a[n][n-1];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-1;j++){
            cin>>a[i][j];
        }
    }
    set<ll> st;
    for(int i=0;i<n-1;i++){
        map<ll,ll> mp;
        for(int j = 0;j<n;j++){
            mp[a[j][i]]++;
        }
        if(i == 0){
            ll mx = 0,c = 0;
            for(auto [x,y]:mp){
                if(mx<y){
                    c = x;
                    mx = y;
                }
            }
            ans.push_back(c);
            st.insert(c);
            for(auto [x,y]:mp){
                if(st.find(x)==st.end()){
                    ans.push_back(x);
                    st.insert(x);
                }
            }
        }
        else{
            for(auto [x,y]:mp){
                if(st.find(x)==st.end()){
                    ans.push_back(x);
                    st.insert(x);
                }
            }
        }
    }
    for(auto x:ans)cout<<x<<" ";
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