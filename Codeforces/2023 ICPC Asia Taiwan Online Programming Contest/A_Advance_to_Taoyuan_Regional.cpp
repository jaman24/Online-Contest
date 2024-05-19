#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    string s;
    cin>>s;
    ll m,d;
    m = s[5] - '0';
    m *= 10;
    m += s[6] - '0';
    d = s[8] - '0';
    d *= 10;
    d += s[9] - '0';
    // cout<<m<<" "<<d<<endl;
    if(m > 9){
        cout<<"TOO LATE"<<endl;
    }
    else if(m == 9 and d > 16){
        cout<<"TOO LATE"<<endl;
    }
    else{
        cout<<"GOOD"<<endl;
    }
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}