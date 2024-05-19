#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    string p,c;
    cin>>p>>c;
    for(int i = 0; i < n; i++){
        ll x = p[i] - 'A';
        ll y = c[i] - 'A';
        ll ans = 0;
        while(x != y){
            x += 3;
            x %= 26;
            ans++;
        }
        cout<<ans<<" ";
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