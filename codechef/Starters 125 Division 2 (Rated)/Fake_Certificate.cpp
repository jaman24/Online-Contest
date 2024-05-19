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
    string s;
    cin>>s;
    ll ans = 0, c = 0, mx = 0;
    for(auto x:s){
        if(x == '1'){
            ans++;
            mx = max(mx, c);
            c = 0;
        }
        else c++;
    }
    mx = max(mx, c);
    cout<<ans+mx<<endl;
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