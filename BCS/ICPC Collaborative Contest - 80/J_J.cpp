#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void countConsecutive(ll N){
    // constraint on values of L gives us the
    // time Complexity as O(N^0.5)
    vector<pair<ll,ll>> v;
    v.push_back({N-1, N});
    for (ll L = 1; L * (L + 1) < 2 * N; L++) {
        double a = (1.0 * N - (L * (L + 1)) / 2) / (L + 1);
        if (a - (ll)a == 0.0){
            // cout<<a-1<<" "<<L+a<<endl;
            if(a-1 > 0)v.push_back({a-1, L+a});
        }
    }
    cout<<v.size()<<endl;
    for(auto x:v)cout<<x.first<<" "<<x.second<<endl;
}
void solve(){
    ll n;
    cin>>n;
    countConsecutive(n);
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}