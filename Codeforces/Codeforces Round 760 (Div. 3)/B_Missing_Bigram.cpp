#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    n-=2;
    bool f = false;
    string ans,s[n];
    for(auto &x:s)cin>>x;
    for(int i = 0; i < n; i++){
        ans += s[i];
        if(i < n-1 and s[i][1] != s[i+1][0]){
            ans += s[i][1];
            ans += s[i+1][0];
            f = true;
        }
    }
    if(!f)ans += 'b';
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