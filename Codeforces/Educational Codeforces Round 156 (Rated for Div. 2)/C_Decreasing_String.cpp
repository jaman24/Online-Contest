#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    string s;
    cin>>s;
    n = s.size();
    ll pos;
    cin>>pos;
    while(pos > n){
        pos -= n;
        n--;
    }
    cout<<s[pos-1];
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    cout<<endl;
    return 0;
}