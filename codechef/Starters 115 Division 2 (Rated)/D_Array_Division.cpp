#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
const ll N = 100005;

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll sum = 0;
    set<ll> st;
    for(auto &x:v){
        cin>>x;
        sum += x;
        st.insert(x);
    }
    if(sum % 2){
        cout<<"NO"<<endl;
        return;
    }
    sum /= 2;
    set<ll> st2;
    ll x = 0;
    for(int i = n-1; i >= 0; i--){
        x += v[i];
        st2.insert(x);
    }
    for(auto x:v){
        if(st.find(sum+x) != st.end() or st2.find(sum-x) != st2.end()){
            cout<<"YES"<<endl;
            return;
        }
    }
    
    cout<<"NO"<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}