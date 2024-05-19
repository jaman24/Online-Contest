#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(auto &x:a)cin>>x;
    ll ans = 0;
    for(int i = n-2;i>=0;i--){
        while(a[i] >= a[i+1] and a[i]!=0){
            a[i]/=2;
            ans++;
        }
        if(a[i] == a[i+1]){
            cout<<"-1"<<endl;return;
        }
    }
    cout<<ans<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}