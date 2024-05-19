#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,m;
    cin>>n>>m;
    ll a[n-1],b[n];
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++)cin>>b[j];
    sort(a,a+(n-1));
    sort(b,b+n);
    ll ans = 0,j = 0;
    ll mn = 0;
    for(int i=0;i<n;i++){
        if(j<n-1 and b[i]>a[j]){
            ans++;
            j++;
        }
        else{
            mn = b[i];
        }
    }
    ll x = n - ans - 1;
    // cout<<x<<" "<<mn<<endl;
    ll final = 0;
    ll res = 0;
    if(m < mn){
        res = (x) * m;
    }
    else{
        res = (x)*(mn-1);
        res += (x+1) * (m-mn+1);
    }
    cout<<res<<endl;


}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}