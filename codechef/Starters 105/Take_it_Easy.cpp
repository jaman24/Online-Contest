#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    bool f = true;
    ll s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    if(s%n){
        cout<<"No"<<endl;
        return;
    }
    ll z = s/n;
    for(auto x:a){
        ll y = abs(x - z);
        if(y%2)f=false;
    }
    if(f){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}