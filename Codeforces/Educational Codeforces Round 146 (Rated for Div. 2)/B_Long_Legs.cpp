#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll a,b;
    cin>>a>>b;
    int len = 1;
    ll mxa = 1,mxb = 1;
    for(int i = 2; i * i <= a; i++)if(a%i == 0)mxa = i;
    for(int i = 2; i * i <= b; i++)if(b%i == 0)mxb = i;
    if(mxa > mxb){
        swap(a,b);
        swap(mxa,mxb);
    }
    ll ans = mxa - 1 + (a/mxa);
    ans += mxb - mxa + (b/mxb);
    ll gc = __gcd(a,b);
    ll ans2 = ((a+b)/gc) + gc - 1;
    cout<<min(ans, ans2)<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}