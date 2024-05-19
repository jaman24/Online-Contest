#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,k;
    cin>>n>>k;
    while(true){
        ll x = n;
        ll sum = 0;
        while(x){
            sum+=x%10;
            x/=10;
        }
        if(sum%k==0){
            cout<<n<<endl;
            return;
        }
        n++;
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