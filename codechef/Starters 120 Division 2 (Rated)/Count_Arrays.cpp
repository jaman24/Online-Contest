#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 998244353;
const int N = 1000005;
ll ans[N];
void cal(){
    ans[0] = 1;
    for(int i = 1; i < N; i++){
        ans[i] = (ans[i-1] * 2) % MOD;
    }
}
void solve(){
    ll n, k;
    cin>>n>>k;
    cout<<ans[k]<<endl;
}
int main(){
    cal();
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}