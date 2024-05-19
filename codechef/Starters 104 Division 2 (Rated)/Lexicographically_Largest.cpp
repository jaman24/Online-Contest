#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n),ans;
    for(auto &x:a)cin>>x;
    ans.push_back(a[0]);
    ll gc = a[0];
    for(int i=1;i<n;i++){
        ll y = a[i];
        ll dy = m / y;
        ll my = dy * y;
        if(a[i] == a[i-1]){
            ans.push_back(my);
        }
        else{
            while(__gcd(gc,my) != y){
                my -= y;
            }
            // cout<<my<<endl;
            gc = __gcd(gc , my);
            ans.push_back(my);
        }
    }
    for(auto x:ans)cout<<x<<" ";
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