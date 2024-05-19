#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans = 0, oz = 0, zo = 0;
    for(int i = 0; i < n; i+=2){
        if(s[i] == s[i+1])ans += 2;
        else if(s[i] == '1')oz++;
        else zo++;
    }
    oz = min(oz, 2ll);
    ans += oz;
    if(zo)ans+=2;
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