#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n,k,x;
    cin>>n>>k>>x;
    ll z = n-k;
    ll s = (z*(z+1))/2;
    ll sum = (n*(n+1))/2;
    ll mx = sum - s;
    ll my = (k*(k+1))/2;
    // cout<<sum<<" "<<s<< " "<<mx<<endl;
    if(x<=mx and x>=my)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}