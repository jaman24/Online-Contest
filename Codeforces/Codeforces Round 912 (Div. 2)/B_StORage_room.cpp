#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n][n];
    for(int i = 0;i<n;i++){
        for(int j = 0; j < n; j++){
            cin>>a[i][j];
        }
    }
    ll ans[n] = {0}, ans1[n] = {0};
    for(int i = 0;i<n-1;i++){
        ll x = a[i][i+1];
        for(int j = i+2;j<n;j++){
            x  &= a[i][j];
        }
        ans[i] = x;
    }
    for(int i = 1;i<n;i++){
        ll x = a[0][i];
        for(int j = 1;j<i;j++){
            x  &= a[j][i];
        }
        ans1[i] = x;
    }

    // for(auto x:ans)cout<<x<<" ";
    // cout<<endl;
    // for(auto x:ans1)cout<<x<<" ";
    // cout<<endl;
    ll res[n];
    res[0] = ans[0];
    res[n-1] = ans1[n-1];
    for(int i = 1;i < n-1;i++){
        res[i] = ans[i] & ans1[i];
    }
    
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if((res[i] | res[j]) != a[i][j]){
                cout<<"NO"<<endl;
                // cout<<i<<" "<<j<<" "<<a[i][j]<<" "<<res[i]<<" "<<res[j]<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
    for(auto x:res)cout<<x<<" ";
    cout<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}