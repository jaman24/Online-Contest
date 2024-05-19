#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    double n;
    cin>>n;
    double x = (n * 5280.0) / 4854.0;
    int ans = (x * 1000) + 0.5;
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