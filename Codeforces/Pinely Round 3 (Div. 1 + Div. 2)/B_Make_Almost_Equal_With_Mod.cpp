#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 1e18;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    ll z = 0, b = 0;
    for(auto &x:a){
        cin>>x;
        if(x%2)b++;
        else z++;
    }
    if(z and b){
        cout<<2<<endl;
        return;
    }
    for(ll i = 2;  ; i *= 2){
        set<ll> s;
        for(auto y:a){
            s.insert(y%i);
        }
        if(s.size() == 2){
            cout<<i<<endl;
            return;
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