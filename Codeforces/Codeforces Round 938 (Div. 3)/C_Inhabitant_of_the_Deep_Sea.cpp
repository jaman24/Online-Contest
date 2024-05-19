#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    int f = 0, l = n-1, ans = 0;
    while(f < l){
        ll need;
        if(v[f] <= v[l]){
            need = v[f] + v[f] - 1;
            if(k >= need){
                ans++;
                k -= need;
                v[l] -= (v[f] - 1);
                f++;
            }
            else break;
            if(k > 0){
                v[l]--;
                k--;
            }
            else break;
        }
        else{
            need = v[l]+v[l];
            if(k >= need){
                k -= need;
                ans++;
                v[f] -= v[l];
                l--;
            }
            else break;
        }
        // cout<<f<<" "<<l<<" "<<need<<" "<<k<<endl;
    }
    // cout<<f<<" "<<l<<endl;
    if(l == f and v[l] <= k)ans++;
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