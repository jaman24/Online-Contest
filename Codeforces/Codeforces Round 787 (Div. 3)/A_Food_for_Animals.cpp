#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    ll rx;
    if(x >= a){
        rx = x - a;
    }
    else rx = 0;
    ll ry;
    if(y>=b){
        ry = y-b;
    }
    else{
        ry = 0;
    }
    if(rx + ry <= c){
        cout<<"YES"<<endl;
    }
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