#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll ans = 0;
    for(int i=0;i<n;i++){
        ll p = 1;
        for(int j=0;j<n;j++){
            if(i==j){
                p*=(a[j]+1);
            }
            else p*=a[j];
        }
        ans = max(p,ans);
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