#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    string s = "codeforces";
    string k;
    cin>>k;
    ll ans = 0;
    for(int i =0;i<s.size();i++){
        if(s[i]!=k[i])ans++;
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