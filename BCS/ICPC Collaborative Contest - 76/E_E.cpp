#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll cal(ll x, ll y, ll n){
    if(x>n)x = (2*n)-x+1;
    else x -= 1;
    if(y>n)y = (2*n)-y+1;
    else y-=1;
    return(x * y);
}
void solve(){
    ll n , k;
    cin>>n>>k;
    ll ans = 0;
    if(k>=0){
        for(int i=k+2;i<=n+n;i++){
            ll j = i-k;
            // cout<<i<< " "<<j<<endl;
            ans += cal(i, j, n);
        }
    }
    else{
        for(int i=2;i+abs(k)<=n+n;i++){
            ll j = i+abs(k);
            // cout<<i<< " "<<j<<endl;
            ans += cal(i, j, n);
        }
    }
    cout<<ans<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}