#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    string s;
    cin>>s;
    ll ans = 0;
    for(int i = 0; i < s.size() - 3; i++){
        if(s[i] == 'k' and s[i+1] == 'i' and s[i+2] == 'c' and s[i+3] == 'k')ans++;
    }
    cout<<ans<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}