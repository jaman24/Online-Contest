#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n;
    cin>>n;
    vector<vector<ll>> v(n);
    set<ll> s;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        for(int j=0;j<x;j++){
            ll y;
            cin>>y;
            v[i].push_back(y);
            s.insert(y);
        }
    }
    ll mx = 0;
    for(auto x:s){
        set<ll> ans;
        for(int i=0;i<n;i++){
            bool f=true;
            for(auto z:v[i]){
                if(z==x){
                    f=false;
                    break;
                }
            }
            if(f){
                for(auto z:v[i])ans.insert(z);
            }
        }
        ll l=ans.size();
        mx=max(mx,l);
    }
    cout<<mx<<endl;
    
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}