#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v;
    for(int i = 1;i<=n;i++){
        ll x;
        cin>>x;
        cout<<n-x+1<< " ";
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