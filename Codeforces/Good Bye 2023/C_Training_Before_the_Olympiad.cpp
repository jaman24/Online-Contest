#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(auto &x:a)cin>>x;
    ll sum = 0;
    ll od = 0, ev = 0;
    for(int i = 0; i < n; i++){
        if(a[i]%2)od++;
        else ev++;
        sum += a[i];
        if(i == 0){
            cout<<a[i]<<" ";
            continue;
        }
        ll x = od/3;
        if(od%3 == 1)x++;
        cout<<sum - x<<" ";
    }
    cout<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}