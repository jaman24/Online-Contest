#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    int b = 0;
    bool f = false;
    for(auto &x:a){
        cin>>x;
        if(x == 0)f = true;
        if(x < 0)b++;
    }
    if(f or b%2){
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
        cout<<1<<" "<<0<<endl;
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