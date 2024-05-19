#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool pos(ll m, vector<int>& v){
    ll sum = m;
    for(auto x:v){
        sum += x;
        if(sum < 0)return false;
    }
    return true;
}
void solve(){
    ll n;
    cin>>n;
    vector<int> v(n);
    for(auto &x:v)cin>>x;
    ll ans = INT_MAX;
    ll l = 0, r = 1e15; 
    while(l < r){
        ll mid = l + (r - l)/2;
        if(pos(mid, v)){
            r = mid;
        }
        else{
            l = mid + 1;
        }
    }
    ll sum = l;
    for(auto x:v){
        sum += x;
    }
    cout<<sum<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}