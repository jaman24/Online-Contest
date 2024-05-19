#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    string s;
    cin>>s;

    string ss="";
    for(int i = s.size()-1; i >= 0; i--){
        if(s[i] == '.')break;
        ss += s[i];
    }
    reverse(ss.begin(), ss.end());
    cout<<ss<<endl;
}
int main(){
    int cn = 1;
    // cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}