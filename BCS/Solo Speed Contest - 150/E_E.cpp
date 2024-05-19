#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(n%2){
        cout<<"NO"<<endl;
        return;
    }
    map<char, int> mp;
    for(auto x:s){
        mp[x]++;
    }
    
    string l = "", r = "";
    priority_queue<pair<int, char>> st;
    for(auto [x, y]:mp){
        st.push({y, x});
    }
    while(!st.empty() and st.size() > 1){
        auto x = st.top();
        st.pop();
        auto y = st.top();
        st.pop();
        l += x.second;
        r += y.second;
        if(x.first-1 > 0)st.push({x.first-1, x.second});
        if(y.first-1 > 0)st.push({y.first-1, y.second});
    }
    if(st.size()){
        cout<<"NO"<<endl;
        return;
    }
    reverse(all(r));
    cout<<"YES"<<endl;
    cout<<l<<r<<endl;
}

int main(){
    // FastIO;
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}