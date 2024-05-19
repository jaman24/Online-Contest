#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n % 2)n =(n * 3) + 1;
        else n /= 2;
        cout<<n<<" ";
    }
    cout<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}