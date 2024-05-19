#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll ncr(ll n)
{
    return (n*(n-1)*(n-2))/6;
}
ll nCr(ll n)
{
    return (n*(n-1))/2;
}
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    int s = 0;
    ll ans = 0;
    for(auto [x,y]:mp){
        if(y >= 3){
            ans += ncr(y);
        }
        if(y >= 2){
            ans += s * nCr(y);
        }
        s += y;
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