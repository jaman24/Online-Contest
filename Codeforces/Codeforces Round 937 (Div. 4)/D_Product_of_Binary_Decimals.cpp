#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>
vector<ll> v;
vector<bool> ans(100010, false);
ll bn(ll n){
    ll binarynumber = 0,i = 1;
    ll remainder;
    while(n>0)
    {
        remainder = n % 2;
        
        n = n / 2;
        binarynumber = binarynumber+remainder * i;
        
        i=i*10;
    }
    return binarynumber;
}
void cal(ll p, ll n){
    if(p >= v.size() or n > 100000)return;
    ans[n] = true;
    cal(p, n*v[p]);
    cal(p + 1, n);
    cal(p + 1, v[p] * n);
}
void pre(){
    for(ll i = 2; i < 32; i++){
        v.push_back(bn(i));
    }
    // for(auto x:v)cout<<x<<endl;
    cal(0, 1);
}
void solve(){
    ll n;
    cin>>n;
    if(ans[n]){
        cout<<"YES"<<endl;
        return;
    }
    ll x = n;
    bool f = true;
    while(x){
        if(x%10 != 1 or x%10 != 0){
            f = false;
        }
        x/=10;
    }
    if(f){
        cout<<"YES"<<endl;
        return;
    }
    else cout<<"NO"<<endl;
    

}
int main(){
    FastIO;
    pre();
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}