#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll ans = 0;
    string s;
    cin>>s;

    ll c = 0;
    for(int i = 0; i < s.size(); i++){
        c++;
        if(i+1 < s.size() and s[i] != s[i+1]){
            ans = max(ans, c);
            c = 0;
        }
    }
    ans = max(ans, c);
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