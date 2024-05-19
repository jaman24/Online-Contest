#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool cmp(pair<ll,ll>& a, pair<ll,ll>& b){
    if(a.first < b.first)return false;
    if(a.first == b.first and a.second <= b.second)return false;
    return true;
}
void solve(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v;
    for(int i = 1; i <= n; i++){
        ll x;
        cin>>x;
        v.push_back({x+i, x+1});
    }
    sort(v.begin(), v.end(), cmp);
    set<ll> st;
    ll mx =INT_MAX;
    for(auto [x,y]:v)cout<<x<<" "<<y<<endl;
    for(auto [x,y]:v){
        if(x <= mx){
            st.insert(x);
            mx = x-1;
        }
        else{
            if(mx >= y){
                st.insert(mx);
                mx -= 1;
            }
        }
    }
    set<ll>::reverse_iterator rit;
    for (rit = st.rbegin(); rit != st.rend(); rit++) 
        cout << *rit << " ";
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