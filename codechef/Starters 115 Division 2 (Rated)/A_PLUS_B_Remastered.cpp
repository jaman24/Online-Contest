#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n), b(n);
    for(auto &x:a){
        cin>>x;
    }
    for(auto &x:b)cin>>x;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<ll>());
    ll x = a[0] + b[0];
    for(int i = 1; i < n; i++){
        if(x!=a[i]+b[i]){
            cout<<"-1"<<endl;
            return;
        }
    }
    for(auto y:a){
        cout<<y<<" ";
    }
    cout<<endl;
    for(auto y:b){
        cout<<y<<" ";
    }
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