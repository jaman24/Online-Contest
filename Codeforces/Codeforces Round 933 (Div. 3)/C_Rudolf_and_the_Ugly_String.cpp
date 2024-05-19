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
    string p = "pie", m = "map", ad = "mapie";
    ll a = 0, b = 0, c = 0;
    for(int i = 0; i < n-2; i++){
        if(s[i] == 'p' and s[i+1] == 'i' and s[i+2] == 'e')a++;
        if(s[i] == 'm' and s[i+1] == 'a' and s[i+2] == 'p')b++;
    }
    for(int i = 0; i < n-4; i++){
        if(s[i] == 'm' and s[i+1] == 'a' and s[i+2] == 'p' and s[i+3] == 'i' and s[i+4] == 'e')c++;
    }
    ll ans = a+b-c;
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
