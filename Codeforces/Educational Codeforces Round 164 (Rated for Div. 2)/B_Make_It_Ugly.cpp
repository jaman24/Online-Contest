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
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    int ans = INT_MAX;
    int c = 0, i = 0;
    while(i < n and v[i] == v[0])c++, i++;
    ans = min(ans, c);
    c = 0;
    i = n-1;
    while(i >= 0 and v[i] == v[0])c++, i--;
    ans = min(ans, c);
    c = 0;
    for(int i = 0; i < n; i++){
        c = 0;
        while(i < n and v[i] == v[0]){
            i++;
            c++;
        }
        ans = min(ans, c);
    }
    if(ans != n){
        cout<<ans<<endl;
    }
    else cout<<-1<<endl;
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