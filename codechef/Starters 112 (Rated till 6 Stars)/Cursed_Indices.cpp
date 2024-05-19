#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(auto &x:a)cin>>x;
    sort(a,a+n);
    ll c = 0;
    ll s = a[0];
    vector<ll> ans, ans1;
    ans.push_back(a[0]);
    for(int i = 1; i < n; i++){
        if(s >= a[i]){
            ans1.push_back(a[i]);
        }
        else{
            ans.push_back(a[i]);
            s += a[i];
        }
    }
    c = ans1.size();
    for(auto x:ans1){
        ans.push_back(x);
    }
    
    cout<<c<<endl;
    for(auto x:ans)cout<<x<<" ";
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