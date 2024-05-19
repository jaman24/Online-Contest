#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n, m, k;
    cin>>n>>m>>k;
    ll each = n/m;
    ll mod = n%m;
    if(mod)mod -= 1;
    if((each * (m-1)) + mod > k){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
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