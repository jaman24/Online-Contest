#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,k,d;
    cin>>n>>k>>d;
    vector<ll> a(n), v(k);
    for(auto &x:a)cin>>x;
    for(auto &x:v)cin>>x;
    int ans = 0;
     for(int i = 0; i < n; i++){
        if(a[i] == i+1){
            ans++;
        }
    }
    int rem = d - 1;
    ans += rem/2;
    int j = 0;
    for(int i = 1; i < 40005 and i < d; i++){
        int c = 0;
        for(int k = 0; k < v[j]; k++){
            a[k]++;
        }
        for(int k = 0; k < n; k++){
            if(a[k] == k+1)c++;
        }
        int rem = d - i - 1;
        c += rem/2;
        ans = max(ans, c);
        j++;
        if(j == k) j = 0;
    }
    cout<<ans<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}