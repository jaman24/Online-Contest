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
    if(a+1 != c){
        cout<<-1<<endl;
        return;
    }
    if(a == 0){
        cout<<b<<endl;
        return;
    }
    ll len = 0, n = 1;
    while(a >= n){
        n*= 2;
        len++;
    }
    ll x = n - a - 1;
    if(b <= x){
        cout<<len<<endl;
        return;
    }
    b -= x;
    ll p = 1;
    while(p * 2 <= a){
        p *= 2;
    }
    ll y = a - p + 1;
    y *= 2;
    ll tot = y + x;
    len += (b/tot);
    if(b%tot)len++;
    cout<<len<<endl;

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