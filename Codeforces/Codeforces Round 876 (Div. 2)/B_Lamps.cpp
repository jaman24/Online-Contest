#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    vector<vector<ll>> v(n+1);
    ll a[n+1] = {0};
    for(int i = 0; i < n; i++){
        ll a,b;
        cin>>a>>b;
        v[a].push_back(b);
    }
    ll ans = 0,on = 0;
    for(int i = 1; i <= n; i++){
        sort(v[i].begin(),v[i].end(),greater<ll>());
        ll c = 1;
        for(auto y:v[i]){
            if(c<=i){
                ans+=y;
                c++;
            }
            else break;
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