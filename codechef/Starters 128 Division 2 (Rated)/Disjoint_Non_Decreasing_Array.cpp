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
    // if(is_sorted(all(v))){
    //     cout<<"Yes"<<endl;
    //     return;
    // }
    ll mn = 0, mx = 1e9;
    bool f = true;
    for(int i = 1; i < n; i++){
        if(f){
            if(v[i-1] > v[i]){
                ll mi = v[i-1] - v[i];
                mn = max(mn, mi);
                f = false;
            }
        }
        else{
            if(v[i-1] > v[i]){
                cout<<"No"<<endl;
                return;
            }
            ll ma = v[i] - v[i-1];
            mx = min(mx, ma);
            f = true;
        }
    }
    // cout<<mx<<" "<<mn<<endl;
    if(mn > mx){
        cout<<"No"<<endl;
    }
    else cout<<"Yes"<<endl;
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