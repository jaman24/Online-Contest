#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll ans = 0, c = 0;
    bool f = true;
    for(int i =0;i<n;i++){
        ll x;
        cin>>x;
        if(x == 0){
            c++;
        }
        else{
            ans = max(ans , c);
            c = 0;
        }
    }
    cout<<max(ans,c)<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}