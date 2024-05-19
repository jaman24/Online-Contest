#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,k;
    cin>>n>>k;
    ll a[k];
    for(auto &x:a)cin>>x;
    ll ans = 0;
    if(k%2 == 0){
        for(int i = 0; i < k; i+=2)ans += a[i+1] - a[i];
        cout<<ans<<endl;
        return;
    }
    else{
        vector<ll> z,b;
        if(k == 1){
            cout<<0<<endl;
            return;
        }
        for(int i = 0; i < k; i += 2){
            z.push_back(a[i+1] - a[i]);
        }
        for(int i = k-1; i > 0; i -= 2){
            b.push_back(a[i] - a[i-1]);
        }
        reverse(b.begin(), b.end());
        for(int i = b.size() - 2; i >= 0; i--){
            b[i] += b[i+1];
        }
        for(int i = 1; i < z.size(); i++){
            z[i] += z[i-1];
        }
        ans = min(z[z.size()-1], b[0]);
        for(int i = 0; i < z.size()-1; i++){
            ans = min(ans, z[i] + b[i+1]);
        }
        cout<<ans<<endl;
    }
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}