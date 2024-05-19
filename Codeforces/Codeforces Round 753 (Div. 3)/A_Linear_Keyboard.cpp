#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    ll ans = 0;
    for(int i = 0;i<t.size()-1;i++){
        int x,y;
        for(int j = 0;j<s.size();j++){
            if(t[i] == s[j]){
                x = j+1;
            }
            if(t[i+1] == s[j]){
                y = j+1;
            }
        }
        ans += abs(x-y);
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