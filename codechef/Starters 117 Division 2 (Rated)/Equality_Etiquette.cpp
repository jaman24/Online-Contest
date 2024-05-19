#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll a, b;
    cin>>a>>b;
    ll dis = abs(a - b);
    ll l = 2 * dis;
    ll x = sqrt(l);
    if(((x * (x + 1))/2) < dis){
        x++;
    }
    while(true){
        ll y = (x * (x + 1))/2;
        if(abs(dis - y)%2 == 0){
            cout<<x<<endl;
            return;
        }
        x++;
    }

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}