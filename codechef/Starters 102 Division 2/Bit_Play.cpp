#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans = 1;
    for(int i=2;i<n;i+=2){
        ll c = 0;
        if(s[i-2]=='0' and s[i-1]=='0' and s[i]=='0')c=3;
        else if(s[i-2]=='0' and s[i-1]=='0' and s[i]=='1')c=0;
        else if(s[i]=='0')c=1;
        else c=2;

        // cout<<c<<"  ";
        ans *= c;
        ans%=mod;
    }
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