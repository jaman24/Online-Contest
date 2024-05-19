#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 1e9 + 7;
const int N = 100005;
ll ans[N];
void sol(){
    ans[1] = 1;
    ans[2] = 1;
    ans[3] = 3;
    ans[4] = 4;
    for(int i = 5; i < N; i++){
        ans[i] = (ans[i-1] + ans[i-2] + ans[i-3]) % MOD;
    }
}
void solve(){
    ll n;
    cin>>n;
    cout<<ans[n]<<endl;
}
int main(){
    sol();
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}