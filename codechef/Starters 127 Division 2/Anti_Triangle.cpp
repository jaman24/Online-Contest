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
    if(n+n-1 < k){
        for(int i = 1; i <= n; i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else{
        ll x = k;
        for(int i = k; i < n+k; i++){
            cout<<i + x<<" ";
            x += k;
        }
        cout<<endl;
    }
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