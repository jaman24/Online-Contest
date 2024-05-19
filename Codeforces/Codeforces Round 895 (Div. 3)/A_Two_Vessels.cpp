#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    float x=abs(a-b)/2.0;
    ll ans = x/c;
    // cout<<x<<" "<<ans<<endl;

    if(ans*c!=x)ans++;

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