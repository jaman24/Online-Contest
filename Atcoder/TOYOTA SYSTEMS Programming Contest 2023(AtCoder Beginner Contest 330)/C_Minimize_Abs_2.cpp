#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll D;
    cin>>D;

    ll MIN = 3e12;
    for (int x = 0; 1LL * x * x <= D; ++x) {
    ll remain = D - 1LL * x * x;
    ll y = sqrt(remain);
    MIN = min(MIN, llabs(1LL * x * x + y * y - D));
    MIN = min(MIN, llabs(1LL * x * x + (y + 1) * (y + 1) - D));
    
  }
    cout<<MIN<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}