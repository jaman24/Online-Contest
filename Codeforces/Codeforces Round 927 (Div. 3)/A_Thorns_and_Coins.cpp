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
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '@')ans++;
        if(i + 1 < n and s[i] == '*' and s[i+1] == '*')break;
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