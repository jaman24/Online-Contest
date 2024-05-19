#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool lav(ll in, ll lost, ll k){
    if((k * in) > lost + in)return true;
    return false;
}
void solve(){
    ll k, x, a;
    cin>>k>>x>>a;
    ll lost = 0, rem = a, bet = 1;
    for(int i = 0; i < x; i++){
        ll l = 0, r = rem;
        while(l < r){
            ll mid = (l+r)/2;
            if(lav(mid, lost, k)){
                r = mid;
            }
            else{
                l = mid + 1;
            }
        }
        if(lav(r, lost, k) == false){
            cout<<"NO"<<endl;
            return;
        }
        rem -= r;
        lost += r;
    }
    if(lav(rem, lost, k) == false){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}
/*
2 3 15
x x x - x x x - 
1 1 1 
loss - 
total - 16
*/