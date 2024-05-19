#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    vector<ll> v;
    ll mx = 0;
    for(int i = 0;i<n;i++){
        ll x;
        cin>>x;
        mx = max(mx, x);
        if(x == 0){
            if(mx){
                v.push_back(mx);
                mx = 0;
            }
            v.push_back(0);
        }
    }
    if(mx){
        v.push_back(mx);
    }
    // for(auto x:v)cout<<x<<" ";
    // cout<<endl;
    ll len = v.size();
    bool ans[len] = {false};
    for(int i = 0;i<len;i++){
        if(v[i] == 2){
            if(i-1>=0)ans[i-1] = true;
            if(i+1<len)ans[i+1] = true;
        }
        else if(v[i] == 1){
            if(i-1 >=0 and ans[i-1] == false){
                ans[i-1] = true;
            }
            else if(i+1<len){
                ans[i+1] = true;
            }
        }
    }
    ll c = 0;
    for(auto x:ans){
        if(!x)c++;
    }
    cout<<c<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}