#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n, x;
    cin>>n>>x;
    ll in = -1;
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    for(int i = 0; i < n; i++){
        if(v[i] == x){
            in = i+1;
            break;
        }
    }
    vector<bool> vis(n, false);
    ll l = 0, r = n;
    while(r - l > 1){
        ll  mid = (l+r)/2;
        if(v[mid] <= x){
            l = mid;
        }
        else r = mid;
    }
    if(v[l] == x){
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
        cout<<l+1<<" "<<in<<endl;
    }
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