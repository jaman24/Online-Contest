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
    vector<ll> a(n), b(n);
    ll s = 0, ss = 0;
    for(auto &x:a){
        cin>>x;
        s += x;
    }
    for(auto &x:b){
        cin>>x;
        ss += x;
    }
    if(s != ss){
        cout<<"NO"<<endl;
        return;
    }
    for(int i = 0; i + 3 < n; i++){
        if(a[i] != b[i]){
            ll p = a[i], q = a[i+1], r = a[i+2], s = a[i+3];
            a[i] = p+q+r;
            a[i+1] = -r;
            a[i+2] = -q;
            a[i+3] = q+r+s;
            if(a[i] != b[i]){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    if(a == b){
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