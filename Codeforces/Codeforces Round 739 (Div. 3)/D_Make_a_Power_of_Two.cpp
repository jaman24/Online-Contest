#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    vector<ll> v;
    ll x = 1;
    while(x < LLONG_MAX/2){
        v.push_back(x);
        x = x << 1;
    }
    ll ans = INT_MAX;
    for(auto x:v){
        string t = to_string(x);
        string s = to_string(n);
        ll m = 0;
        int j = 0;
        for(int i = 0;i<s.size();i++){
            if(j < t.size() and t[j] == s[i]){
                m++;
                j++;
            }
        }
        ll need = s.size() - m;
        need += (t.size() - m);
        ans = min(ans , need);
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