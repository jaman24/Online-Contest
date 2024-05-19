#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n = 0;
    string s;
    cin>>s;
    for(auto x:s){
        if(x == 'A')n++;
    }
    if(n >= 3){
        cout<<"A"<<endl;
    }
    else cout<<"B"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}