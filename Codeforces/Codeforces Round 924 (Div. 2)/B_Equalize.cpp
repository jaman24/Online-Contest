#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    vector<ll> v;
    set<ll> s;
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        if(s.find(x) == s.end()){
            v.push_back(x);
            s.insert(x);
        }
    }
    sort(v.begin(), v.end());
    int j = 0, m = v.size(), ans = 0;
    for(int i = 0; i < m; i++){
        while (v[i] - v[j] >= n)
        {
            j++;
        }
        ans = max(ans, i-j+1);
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