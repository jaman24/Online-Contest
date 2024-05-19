#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    if(n < 1400){
        cout<<"Division 4"<<endl;
    }
    else if( n < 1600){
        cout<<"Division 3"<<endl;
    }
    else if(n < 1900){
        cout<<"Division 2"<<endl;
    }
    else cout<<"Division 1"<<endl;
}

int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}