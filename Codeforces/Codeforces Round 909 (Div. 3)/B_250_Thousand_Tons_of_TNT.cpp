#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(auto &x:a)cin>>x;
    ll sum[n+1];
    sum[1] = a[0];
    for(int i = 2;i<=n;i++){
        sum[i] = sum[i-1] + a[i-1];
    }
    ll ans = 0;
    for(int i = 1;i<n;i++){
        if(n%i == 0){
            vector<ll> v;
            for(int j = i; j <= n; j+=i){
                ll x = sum[j];
                if(j-i>0)x -= sum[j-i];
                v.push_back(x);
            }
            sort(v.begin(),v.end());
            ans = max(ans, v[v.size()-1] - v[0]);
        }        
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