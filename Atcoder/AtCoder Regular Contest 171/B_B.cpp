#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll x,v,x1,v1;
    cin>>x>>v>>x1>>v1;
    if(v <= v1){
        cout<<"NO"<<endl;
        return;
    }
    while(x <= x1){
        if(x == x1){
            cout<<"YES"<<endl;
            return;
        }
        x += v;
        x1 += v1;
    }
    cout<<"NO"<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}