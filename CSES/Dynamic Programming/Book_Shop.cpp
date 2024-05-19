#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n,x;
    cin>>n>>x;
    ll price[n],page[n];
    for(int i = 0;i<n;i++){
        cin>>price[i];
    }
    for(int i = 0;i<n;i++){
        cin>>page[i];
    }
    vector<ll> prev(x+1, 0);
    for(int i = 1; i <= n; i++){
        vector<ll> next(x+1);
        for(int j = 0; j <= x; j++){
            ll p = price[i-1];
            ll pag = page[i-1];
            ll pick = (j >= p ? pag + prev[j-p] : 0);
            ll skip = prev[j];
            next[j] = max(skip, pick);
        }
        prev = next;
    }
    cout<<prev[x]<<endl;

}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}