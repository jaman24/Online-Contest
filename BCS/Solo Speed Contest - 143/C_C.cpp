#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    string s;
    cin>>s;
    ll c = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '4' and s[i] != '7')c++;
    }
    cout<<c<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}