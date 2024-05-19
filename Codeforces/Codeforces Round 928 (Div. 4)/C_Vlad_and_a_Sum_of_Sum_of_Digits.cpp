#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N = 200010;
vector<ll> ans(N);
void pre(){
    ll as = 0;
    for(int i = 1; i < N; i++){
        ll n = i;
        while(n){
            as += n%10;
            n/=10;
        }
        ans[i] = as;
    }
}
void solve(){
    ll n;
    cin>>n;
    cout<<ans[n]<<endl;
}
int main(){
    pre();
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}
