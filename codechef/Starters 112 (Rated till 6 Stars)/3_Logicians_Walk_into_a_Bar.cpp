#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    bool f = true;
    for(int i = 0; i < n - 1; i++){
        if(s[i] == '0')f = false;
        if(f == false){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"IDK"<<endl;
    }
    if(s[n-1] == '0')f = false;
    if(f)cout<<"YES"<<endl;
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