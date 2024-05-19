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
    ll x = 0,y = 0;
    for(int i = n-1;i>=0;i--){
        if(s[i] == '1')x++;
        else y++;
        if(abs(x-y)>1){
            f = false;
        }
    }
  
    if(f){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}