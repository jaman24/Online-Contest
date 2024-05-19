#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll x, q;
    cin>>x>>q;
    while(q--){
        ll p;
        cin>>p;
        cout<<p<<endl;
        for(int i = 1; i <= 500000; i++){
            ll g = gcd(x, i);
            ll l = (x*i)/g;
            ll z = pow(g, p);
            if(z == l){
                cout<<x<<" "<<i<<"  gcd- "<<g<<endl;
                ll d = i;
                for(int j = 2; j <= i; j++){
                    while(d%j == 0){
                        cout<<j<<" ";
                        d/=j;
                    }
                }
                cout<<endl;
            }
        }       
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