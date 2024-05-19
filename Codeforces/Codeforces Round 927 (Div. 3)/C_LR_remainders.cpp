#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    string s;
    cin>>s;
    ll l = 0, r = n-1;
    for(auto x:s){
        if(x == 'L'){
            l++;
        }
        else{
            r--;
        }
    }
    // cout<<l<<" "<<r<<endl;
    l--;
    r++;
    vector<ll> ans(n);
    ll mul = 1;
    for(int i = n-1; i >= 0; i--){
        if(s[i] == 'L'){
            mul *= v[l];
            mul %= m;
            ans[i] = mul;
            l--;
        }
        else{
            mul *= v[r];
            mul %= m;
            ans[i] = mul;
            r++;
        }
    }
    for(auto x:ans)cout<<x<<" ";
    cout<<endl;
}
int main(){
    FastIO;
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}