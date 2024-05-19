#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll a,b;
    cin>>a>>b;
    ll ans = INT_MAX;
    ll x = a, y = b;
    
    while(x >= y){
        if(x%y == 0){
            break;
        }
        else{
            x--;
            y++;
        }
    }
    if(x%y == 0){
        ans =min(ans, y - b);
    }
    x = a, y = b;
    while(y > 1){
        if(x%y == 0){
            break;
        }
        else{
            x++;
            y--;
        }
    }
    if(x%y == 0){
        ans = min(ans, x - a);
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