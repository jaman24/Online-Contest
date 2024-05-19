#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll x = 0, y = 0, pt = 0;
    bool f = true;
    for(int i = 0;i < n;i++){
        ll t, p , q;
        cin>>t>>p>>q;
        ll d = abs(x - p) + abs(y - q);
        ll td = t - pt;
        // cout<<d<<" "<<td<<endl;
        if(td < d){
            f = false;
        }
        else{
            ll rem = td - d;
            if(rem%2)f = false;
        }
        pt = t;
        x = p, y = q;
    }
    if(f)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}