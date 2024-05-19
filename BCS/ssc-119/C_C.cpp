#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll ans = a[0],c=1;
    for(int i=1;i<n;i++){
        if(a[i-1]<a[i]){
            ll x=(c*(a[i]-a[i-1]));
            if(k>=x){
                k-=x;
            }
            else{
                ans = a[i-1]+(k/c);
                cout<<ans<<endl;
                return;
            }
        }
        c++;
    }
    ans =a[n-1] + k/n;
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