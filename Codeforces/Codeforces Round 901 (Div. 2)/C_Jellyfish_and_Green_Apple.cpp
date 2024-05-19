#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n,m;
    cin>>n>>m;
    unordered_set<ll> st;
    ll ans = 0;
    while(true){
        if(st.find(n)!=st.end() || st.size()>100){
            cout<<-1<<endl;
            return;
        }
        st.insert(n);
        while(n<m){
            ans += n;
            n*=2;
        }
        n%=m;
        if(n==0){
            cout<<ans<<endl;
            return;
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