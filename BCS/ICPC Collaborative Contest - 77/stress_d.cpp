#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,q;
    cin>>n>>q;
    ll a[q];
    for(int i=0;i<q;i++){
        cin>>a[i];
    }
    ll ans = 0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            for(auto x:a){
                if(x>=i and x<=j){
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}