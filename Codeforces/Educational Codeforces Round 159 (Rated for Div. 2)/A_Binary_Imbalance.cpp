#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1 and s[0] == '0'){
        cout<<"YES"<<endl;
        return;
    }
    ll one = 0;
    for(int i = 0;i<n-1;i++){
        if(s[i]!=s[i+1]){
            cout<<"YES"<<endl;
            return;
        }
        if(s[i] == '0')one++;
    }
    if(s[n-1] == '0')one++;
    if(one > n-one){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}
