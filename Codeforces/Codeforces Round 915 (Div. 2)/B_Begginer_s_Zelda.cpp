#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin>>n;
    ll v[n+1];
    memset(v, 0, sizeof v);
    for(int i = 0; i < n-1; i++){
        ll x,y;
        cin>>x>>y;
        v[x]++;
        v[y]++;
    }
    ll cnt = 0;
    for(int i = 1; i <= n; i++){
        if(v[i] == 1)cnt++;
    }
    cout<<(cnt+1)/2<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}