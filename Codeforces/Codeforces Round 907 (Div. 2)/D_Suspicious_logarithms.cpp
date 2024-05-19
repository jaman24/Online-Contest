#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gofx(ll x, ll base){
    if(base < 2)return 0;
    ll k = 0;
    while(x>=base){
        k++;
        x/=base;
    }
    return k;
}

void solve(){
    // ll n;
    // cin>>n;
    for(int i = 1; i < 10000; i++){
        cout<<"for ->"<<i<<" "<<gofx(i, 2)<<" "<<gofx(i , gofx(i , 2))<<endl;
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