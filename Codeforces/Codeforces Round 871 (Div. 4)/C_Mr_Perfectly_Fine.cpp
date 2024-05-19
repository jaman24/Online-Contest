#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll ans = INT_MAX,s = INT_MAX,t = INT_MAX;
    for(int i = 0;i<n;i++){
        ll x;
        string k;
        cin>>x>>k;
        if(k[0] == '1' and k[1] == '1'){
            ans = min(ans , x);
        }
        else if(k[0] == '1'){
            s = min(x , s);
        }
        else if(k[1]=='1'){
            t = min(t , x);
        }
    }
    ans = min(ans , s+t);
    if(ans == INT_MAX){
        cout<<"-1"<<endl;
    }
    else cout<<ans<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}