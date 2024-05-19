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
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    for(int i = 0; i < n-3; i++){
        if(v[i] < 0){
            cout<<"NO"<<endl;
            return;
        }
        v[i+1] -= (v[i]*2);
        v[i+2] -= v[i];
    }
    // for(auto x:v)cout<<x<<" ";
    // cout<<endl;
    if(v[n-3] == v[n-1] and v[n-1]*2 == v[n-2]){
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