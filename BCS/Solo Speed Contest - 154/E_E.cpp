#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n, k;
    cin>>n>>k;
    set<ll> st, t;
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        st.insert(x);
        t.insert(x);
    }
    ll ans = 0, ans1 = 0;
    ll x = k;
    // cout<<*st.rbegin()<<endl;
    for(int i = 1; i <= 2*n, x > 0; i++){
        if(st.find(i) == st.end()){
            st.insert(i);
            ans += (*st.rbegin() - i);
            x--;
        }
    }
    for(int i = 2*n; i > 0; i--){
        if(t.find(i) == t.end()){
            t.insert(i);
            ans1 += (*t.rbegin() - i);
            k--;
            break;
        }
    }
    for(int i = 1; i <= 2*n, k > 0; i++){
        if(t.find(i) == t.end()){
            t.insert(i);
            ans1 += (*t.rbegin() - i);
            k--;
        }
    }
    cout<<max(ans, ans1)<<endl;
}
int main(){
    FastIO;
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}