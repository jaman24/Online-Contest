#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n, k;
    cin>>n>>k;
    if(n == 1){
        cout<<k<<endl;
        return;
    }
    ll x = 1;
    while((x*2)-1 <= k){
        x *= 2;
    }
    x -= 1;
    ll y = k - x;
    cout<<x<<" "<<y<<" ";
    for(int i = 0; i < n-2; i++){
        cout<<0<<" ";
    }
    cout<<endl;
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