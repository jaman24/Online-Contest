#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    string s;
    cin>>s;
    if(s[0]=='a' || s[1] == 'b' || s[2]=='c'){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}