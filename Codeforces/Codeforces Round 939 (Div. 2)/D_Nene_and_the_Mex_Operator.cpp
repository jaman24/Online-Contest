#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>
int check_bit(unsigned int n, unsigned int k)
{
    return (n >> k) & 1;
}
vector<pair<ll,ll>> res;
void cal(ll c, ll l, ll r){
    if(c == 0){
        return;
    }
    res.push_back({l, c+l-1});
    for(int i = 1; i < c; i++){
        cal(c-i, l, r - i);
    }
}
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    ll x = pow(2, n-1), ans = 0, id = -1;
    for(int i = 0; i < x; i++){
        ll temp = 0;
        ll c = 1, sum = v[0];
        for(int b = 0; b < n-1; b++){
            ll bit = check_bit(i, b);
            if(bit){
                temp += max(sum, c * c);
                c = 1;
                sum = v[b+1];
            }
            else{
                c++;
                sum += v[b+1]; 
            }
            // cout<<check_bit(i, b);
        }
        temp += max(sum, c * c);
        if(ans < temp){
            ans = temp;
            id = i;
        }
    }
    ll sum = 0, c = 1;
    for(int b = 0; b < n-1; b++){
        ll bit = check_bit(id, b);
        if(bit){
            if(sum < c * c){
                // process t
                int l = b - c + 2, r = l + c;
                int d = r - l;
                // cout<<l<<" "<<r<<endl;
                cal(c, l, r);
                 
            }
            sum = v[b+1];
            c = 1;
        }
        else{
            c++;
            sum += v[b+1];
        }
    }
    if(sum < c * c){
        // process t
        int l = n - c + 1, r = n;
        // cout<<l<<" "<<r<<endl;
        cal(c, l, r);
    }
    cout<<ans<<" "<<res.size()<<endl;
    for(auto [x,y]:res)cout<<x<<" "<<y<<endl;
    
}
int main(){
    FastIO;
    int cn = 1;
    // cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}
/*
0 0 0 0
0 1 0 0

*/