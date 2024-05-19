#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    string s;
    cin>>s;
    ll l = 0;
    while(l<s.size() and s[l]!='0'){
        l++;
    }
    if(l>=s.size())l--;
    ll ans = 0,x = l;
    bool f = true;
    while(l>=0 and f){
        if(s[l] == '1')f=false;
        ans++;
        l--;
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