#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll a,b,x,y,x1,y1;
    cin>>a>>b>>x>>y>>x1>>y1;
    map<pair<ll,ll>, int> mp;
    ll ans = 0;
    mp[{x-a,y+b}]++;
    mp[{x-a,y-b}]++;
    mp[{x+a,y+b}]++;
    mp[{x+a,y-b}]++;
    mp[{x-b,y+a}]++;
    mp[{x-b,y-a}]++;
    mp[{x+b,y+a}]++;
    mp[{x+b,y-a}]++;
    set<pair<ll,ll>> st;
    if(mp.find({x1-a,y1+b})!=mp.end() and st.find({x1-a,y1+b}) == st.end()){
        ans++;
        st.insert({x1-a,y1+b});
    }
    if(mp.find({x1-a,y1-b})!=mp.end()and st.find({x1-a,y1-b}) == st.end()){
        ans++;
        st.insert({x1-a,y1-b});
    }
    if(mp.find({x1+a,y1+b})!=mp.end() and st.find({x1+a,y1+b}) == st.end()){
        ans++;
        st.insert({x1+a,y1+b});
    }
    if(mp.find({x1+a,y1-b})!=mp.end() and st.find({x1+a,y1-b}) == st.end()){
        ans++;
        st.insert({x1+a,y1-b});
    }
    if(mp.find({x1-b,y1+a})!=mp.end() and st.find({x1-b,y1+a}) == st.end()){
        ans++;
        st.insert({x1-b,y1+a});
    }
    if(mp.find({x1-b,y1-a})!=mp.end() and st.find({x1-b,y1-a}) == st.end()){
        ans++;
        st.insert({x1-b,y1-a});
    }
    if(mp.find({x1+b,y1+a})!=mp.end() and st.find({x1+b,y1+a}) == st.end()){
        ans++;
        st.insert({x1+b,y1+a});
    }
    if(mp.find({x1+b,y1-a})!=mp.end() and st.find({x1+b,y1-a}) == st.end()){
        ans++;
        st.insert({x1+b,y1-a});
    }
    cout<<ans<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}