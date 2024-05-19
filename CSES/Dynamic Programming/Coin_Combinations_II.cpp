#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 1e9 + 7;
void solve(){
    ll n,k;
    cin>>n>>k;
    ll c[n];
    for(int i = 0;i<n;i++){
        cin>>c[i];
    }
    vector<ll> prev(k+1, 0);
    prev[0] = 1;
    for(int i = n-1; i >= 0; i--){
        vector<ll> next(k+1, 0);
        next[0] = 1;
        for(int j = 1; j <= k; j++){
            ll skip = prev[j];
            ll pick = 0;
            if(c[i] <= j){
                pick = next[j - c[i]];
            }
            next[j] = (pick + skip)%MOD;
        }
        prev = next;
    }
    cout<<prev[k]<<endl;
 
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}