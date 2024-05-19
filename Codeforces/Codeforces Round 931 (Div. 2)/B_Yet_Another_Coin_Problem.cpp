#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

void solve(){
    ll n;
    cin>>n;
    ll ans = 0;
    ll x = n/15;
    if(x and (n%15 == 5 or n%15 == 8)){
        ans += x - 1;
        n -= (x-1)*15;
    }
    else{
        ans += x;
        n%=15;
    }
    ll y = n/10;
    if(y and (n%10 == 8 or n%10 == 2)){
        ans += y-1;
        n -= (y-1)*10;
    }
    else{
        ans += y;
        n%=10;
    }

    ans += n/6;
    n %= 6;
    ans += n/3;
    n %= 3;
    ans += n;
    cout<<ans<<endl;
}
int main(){
    FastIO;
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}