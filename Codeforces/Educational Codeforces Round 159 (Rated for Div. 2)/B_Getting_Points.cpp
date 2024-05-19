#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,p,l,t;
    cin>>n>>p>>l>>t;
    ll task = n/7;
    if(n%7)task++;
    ll pd = l + (t * 2);
    ll md = task/2;
    ll total = md * pd;
    if(total >= p){
        ll ans = p / pd;
        if(p%pd)ans++;
        cout<<n - ans<<endl;
    }
    else{
        ll ans = md;
        if(task%2){
            total += t + l;
            ans += 1;
        }
        if(total < p){
            ll rem = p - total;
            ans += rem / l;
            if(rem%l)ans++;
        }

        cout<<n - ans<<endl;
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