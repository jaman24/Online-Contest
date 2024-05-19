#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll> one(n, 0), zero(n, 0);
    if(s[0] == '0')zero[0] = 1;
    else one[0] = 1;
    for(int i = 1; i < n; i++){
        if(s[i] == '0'){
            zero[i] = zero[i-1] + 1;
            one[i] = one[i-1];
        }
        else{
            zero[i] = zero[i-1];
            one[i] = one[i-1] + 1;
        }
    }
    ll lone = 0, lzero = 0, rone = one[n-1], rzero = zero[n-1];
    ll ans = -1;
    double dis = INT_MAX;
    for(int i = 0; i < n; i++){
        ll len = i;
        ll len1 = n-i;
        ll x = (len/2) + (len%2 ? 1 : 0);
        ll y = (len1/2) + (len1%2 ? 1 : 0);
        if(lzero >= x and rone >= y){
            double di = n/2.0;
            di = abs(di - i);
            if(di < dis){
                ans = i;
                dis = di;
            }
        }
        if(s[i] == '0'){
            lzero++;
        }
        else{
            rone--;
        }
    }
    if(ans == -1)ans = n;
    cout<<ans<<endl;
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