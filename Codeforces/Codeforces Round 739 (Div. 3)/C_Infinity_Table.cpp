#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    ll x = sqrt(n);
    ll d = x*x;
    if(d == n){
        cout<<x<<" "<<1<<endl;
    }
    else{
        ll rem = n - d;
        ll r = min(rem , x+1);
        ll c;
        if(rem > x){
            rem-= x+1;
            c = x+1 - rem;
        }
        else{
            c = x+1;
        }

        cout<<r<<" "<<c<<endl;
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