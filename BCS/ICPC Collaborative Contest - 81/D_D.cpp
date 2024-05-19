#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

void solve(){
    ll n;
    cin>>n;
    set<ll> st;
    st.insert(n);
    for(int i = 2; ; i++){
        if(n%2){
            n = 3*n + 1;
            if(st.find(n) != st.end()){
                cout<<i<<endl;
                return;
            }
            st.insert(n);
        }
        else{
            n = n/2;
            if(st.find(n) != st.end()){
                cout<<i<<endl;
                return;
            }
            st.insert(n);
        }
    }
}
int main(){
    FastIO;
    int cn = 1;
    // cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}