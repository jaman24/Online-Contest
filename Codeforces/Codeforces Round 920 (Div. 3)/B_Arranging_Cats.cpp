#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    string s,f;
    cin>>s>>f;
    ll s1 = 0, f1 = 0, c = 0;
    for(auto x:s)if(x == '1')s1++;
    for(auto x:f)if(x == '1')f1++;
    for(int i = 0; i < n; i++){
        if(s[i] == f[i] and s[i] == '1')c++;
    }
    s1 -= c;
    f1 -= c;
    cout<<max(s1, f1)<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}