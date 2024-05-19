#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,k;
    cin>>n>>k;
    ll a[n];
    vector<ll> ans;
    map<ll, vector<ll>> mp;
    for(int i = 0;i<n;i++){
        ll x;
        cin>>x;
        a[i] = x%k;
        if(a[i] == 0){
            ans.push_back(i+1);
        }
        else{
            mp[a[i]].push_back(i+1);
        }
    }
    vector<ll> last;
    for(auto [x,y]:mp){
        for(int i = y.size()-1;i>=0;i--){
            last.push_back(y[i]);
        }
    }
    for(auto x:ans)cout<<x<<" ";
    for(int i = last.size()-1;i>=0;i--)cout<<last[i]<<" ";
    cout<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}