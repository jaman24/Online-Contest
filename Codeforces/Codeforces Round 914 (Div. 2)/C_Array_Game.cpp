#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v;
    for(int i = 0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    if(k >= 3){
        cout<<0<<endl;
        return;
    }
    vector<ll> temp;
    sort(v.begin(),v.end());
    ll ans = v[0];
    for(int i = 0;i<n-1;i++){
        for(int j = i+1; j < n;j++){
            ll x = abs(v[i] - v[j]);
            ans = min(ans, x);
            temp.push_back(x);
        }
    }

    if(k == 1ll){
        cout<<ans<<endl;
        return;
    }

    sort(temp.begin(), temp.end());
   
    for(auto x:v){
        int id = upper_bound(temp.begin(),temp.end(), x) - temp.begin();
        if(id < temp.size()){
            ans = min(ans, abs(x - temp[id]));
            
        }
        id--;
        if(id >= 0){
            ans = min(ans, abs(x - temp[id]));
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