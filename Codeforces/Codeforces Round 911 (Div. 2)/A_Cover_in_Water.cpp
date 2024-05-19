#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll sum = 0, mx = 0, c = 0;
    for(int i= 0 ; i<n;i++){
        if(s[i] == '#'){
            mx = max(mx , c);
            c = 0;
        }
        else {
            c++;
            sum++;
        }
    }
    mx = max(mx, c);
    if(mx>=3){
        cout<<2<<endl;
    }
    else cout<<sum<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}