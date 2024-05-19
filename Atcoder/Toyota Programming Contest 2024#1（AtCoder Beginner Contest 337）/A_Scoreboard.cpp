#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll t = 0, a = 0;
    for(int i = 0; i < n; i++){
        ll x,y;
        cin>>x>>y;
        t+=x;
        a+=y;
    }
    if(t > a){
        cout<<"Takahashi"<<endl;
    }
    else if(a > t){
        cout<<"Aoki"<<endl;
    }
    else cout<<"Draw"<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}