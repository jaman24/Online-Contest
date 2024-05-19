#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll ans[n+1] = {0};
    ll a[n];
    ll mn = INT_MAX, id = -1;
    for(int i = 0;i < n;i++){
        cin>>a[i];
        if(mn >= a[i]){
            mn = a[i];
            id = i;
        }
    }
    ll k;
    cin>>k;
    ll x = k / mn;
    k = (k % mn);
    if(x>0){
        x--;
        k += mn;
    }
    // cout<<x<<" "<<k<<endl;
    if(k > mn){ 
        for(int i = n-1;i>id;i--){
            if(a[i] <= k){
                k -= a[i];
                ans[0]++;
                ans[i+1]--;
                if(x>0){
                    k += mn;
                    x--;
                }
            }
        }
    }
    if(k >= mn)x++;
    ans[0] += x;
    ans[id+1] -= x;
    for(int i = 1;i<=n;i++){
        ans[i] += ans[i-1];
    }
    for(int i = 0;i<n;i++){
        cout<<ans[i]<<" ";
    }
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