#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll a, b, c;
    cin>>a>>b>>c;
    ll ans = a;
    ans += (c + b)/3;
    if((c+b)%3)ans++;
    if((c+b)%3 > c){
        cout<<"-1"<<endl;
        return;
    }
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