#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
bool has[1000005] = {false};
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    set<ll> s;
    for(auto &x:v){
        cin>>x;
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    ll ans = 0;
    for(int i=1;i<n and v[i]>ans+1;i++){
        if(s.find(v[i]) == s.end()){
            ll mx = 0;
            for(int j = 0;j<i;j++){
                mx = max(mx , v[j]%v[i]);
            }
            ans = max(mx , ans);
            s.insert(v[i]);
        }
    }
    cout<<ans<<endl;
    
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}