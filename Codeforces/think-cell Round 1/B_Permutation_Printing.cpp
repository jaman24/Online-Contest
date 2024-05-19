#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    vector<ll> v;
    if(n%2){
        ll y = (n+1)/2;
        v.push_back(y);
        ll x = n/2;
        ll z = y+1;
        for(int i = x; i >= 1; i--){
            v.push_back(z);
            v.push_back(i);
            z++;
        }
    }
    else{
        ll y = (n/2);
        ll x = n/2;
        ll z = y+1;
        for(int i = x; i >= 1; i--){
            v.push_back(z);
            v.push_back(i);
            z++;
        }
    }
    for(auto x:v)cout<<x<<" ";
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