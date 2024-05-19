#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll a[3],b[3];
    cin>>a[0]>>a[1]>>a[2];
    cin>>b[0]>>b[1]>>b[2];
    sort(a,a+3,greater<ll>());
    sort(b,b+3,greater<ll>());
    ll al = a[0]*100 + a[1]*10 + a[2];
    ll bl = b[0]*100 + b[1]*10 + b[2];

    if(al==bl){
        cout<<"Tie"<<endl;
    }
    else if(al>bl){
        cout<<"Alice"<<endl;
    }
    else cout<<"Bob"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}