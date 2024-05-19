#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(int s){
    ll n;
    cin>>n;
    ll a[n];
    for(auto &x:a)cin>>x;
    sort(a,a+n);
    ll pre[n];
    pre[0] = a[0];
    for(int i = 1; i < n; i++){
        pre[i] = pre[i-1] + a[i];
    }
    ll ans = pre[n/2];
    if(n%2 == 0)ans -= a[0];
    if(s == 0){
        cout<<ans<<endl;
        return;
    }
    for(int i = 0; i <= n/2; i++){
        int r = n - i - 1;
        int l = r - (i+1);
        // cout<<l<<" "<<r<<endl;
        ll res = pre[r];
        if(l >= 0)res -= pre[l];
        ans = max(ans, res);
    }
    cout<<ans<<endl;
}
int main(){
    int cn = 1, s;
    cin>>cn>>s;
    while(cn--){
        solve(s);
    }
    return 0;
}