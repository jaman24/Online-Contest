#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
bool check_bit(ll n, int k)
{
    return (n >> k) & 1;
}
ll set_bit(ll n, int k)
{
    if(check_bit(n,k) == false){
        n ^= 1 << k;
    }
    return n;
}
ll unset_bit(ll n, int k){
    if(check_bit(n,k)){
        n ^= 1 << k;
    }
    return n;
}
void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    if(a > b)swap(a, b);

    bool f = false, d = false;
    
    for(int i = 62; i >= 0; i--){
        
        if(f == false){
            if(check_bit(c, i))d = true;
            if(check_bit(a,i) == false and check_bit(b,i))f = true;
        }
        else if(check_bit(a, i) == false and check_bit(b, i)){
            if(d or check_bit(c,i)){
                b = unset_bit(b, i);
                a = set_bit(a, i);
            }
        }
        else if(check_bit(c, i)){
            d = true;
        }

    }

    cout<<b-a<<endl;
    
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}