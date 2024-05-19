#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(auto &x:a)cin>>x;
    sort(a,a+n);
    ll i = 0, j = n-1;
    ll ans = 0, x = 0;
    while(i  <= j){
        if(i == j){
            ll need = (a[i] + x)/2;
            ans += need - x;
            if(need>0)ans++;
            if((a[i]+x)%2)ans++;
            break;
        }
        if(a[i] + x < a[j]){
            ans += a[i];
            x += a[i];
            i++;
            continue;
        }
        ll need = a[j] - x;
        a[i] -= need;
        ans += need+1;
        j--;
        x = 0;
    }
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