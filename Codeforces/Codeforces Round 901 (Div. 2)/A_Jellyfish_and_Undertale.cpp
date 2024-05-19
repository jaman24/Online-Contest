#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll a,b,n;
    cin>>a>>b>>n;
    ll t[n];
    for(int i=0;i<n;i++){
        cin>>t[i];
    }
    sort(t,t+n);
    ll ans = b;
    for(int i=0;i<n;i++){
        if(t[i]+1<=a){
            ans+=t[i];
        }
        else{
            ans+=a-1;
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