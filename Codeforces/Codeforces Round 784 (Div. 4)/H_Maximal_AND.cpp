#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int check_bit(unsigned int n, unsigned int k)
{
    return (n >> k) & 1;
}
int set_bit(int n, int k)
{
    if(check_bit(n,k) == 0){
        n ^= 1 << k;
    }
    return n;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(auto &x:a)cin>>x;
    
    for(int j = 30; j >= 0; j--){
        ll c = 0;
        for(int i = 0; i < n; i++){
            if(check_bit(a[i], j) == 0){
                c++;
            }
        }
        if(k>=c){
            k-=c;
            for(int i = 0; i < n; i++){
                if(check_bit(a[i], j) == 0){
                    a[i] = set_bit(a[i], j);
                }
            }
        }
    }
    ll ans = a[0];
    for(auto x:a)ans &= x;
    cout<<ans<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}