#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    if(abs(b-c)%2 == 0){
        cout<<1<<" ";
    }
    else cout<<0<<" ";

    if(abs(a-c)%2 == 0){
        cout<<1<<" ";
    }
    else cout<<0<<" ";

    if(abs(a-b)%2 == 0){
        cout<<1<<endl;
    }
    else cout<<0<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}