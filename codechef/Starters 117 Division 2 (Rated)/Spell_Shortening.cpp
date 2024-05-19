#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll x = -1;
    for(int i = 0; i < n-1; i++){
        if(s[i] > s[i+1]){
            x = i;
            break;
        }
    }
    if(x == -1)x = n-1;
    for(int i = 0; i < n; i++){
        if(i != x)cout<<s[i];
    }
    cout<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}