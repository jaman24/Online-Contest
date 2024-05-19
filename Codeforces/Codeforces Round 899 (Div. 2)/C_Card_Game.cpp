#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    ll ans = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>0)
        ans+=a[i];
    }
    if(n>=2){
        if(a[0]<0 and a[1]>0 and abs(a[0])<a[1]){
            ans+=a[0];
        }
        else if(a[0]<0 and a[1]>0){
            ans-=a[1];
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