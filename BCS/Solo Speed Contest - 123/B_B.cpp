#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll h,w,n;
    cin>>h>>w>>n;
    ll a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    ll c = 0, d = 0;
    for(int i=0;i<n;i++){
        d += a[i];
        if(d > w){
            cout<<"NO"<<endl;
            return;
        }
        if(d == w){
            d = 0;
            c++;
        }
        if(c == h)break;
    }
    if(c == h)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}