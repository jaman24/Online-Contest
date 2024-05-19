#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll ncr[70][70];
ll nCr(ll n, ll r)
{
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return ncr[n][r] = 1;
    if(ncr[n][r] != -1)return ncr[n][r];
    return ncr[n][r] = nCr(n - 1, r - 1) + nCr(n - 1, r);
}
void solve(){
    ll n;
    cin>>n;
    vector<ll> ans(70);
    for(int i = 1; i <= 60; i++){
        ll sum = 0;
        for(int j = 1; j <= i; j++){
            sum += ncr[i][j];
        }
        ans[i] = sum;
    }
    // for(int i = 1; i < ans.size(); i++){
    //     cout<<ans[i]<<endl;
    // }
    vector<int> res;
    int id = 1;
    n -= 1;
    while(n > 0){
        int k = 0;
        for(int i = 1; i <= 60; i++){
            if(ans[i+1] > n){
                // cout<<n<<" "<<i<<endl;
                n -= ans[i];
                k = i;
                break;
            }
        }
        for(int j = id+k-1; j >= id; j--){
            res.push_back(j);
        }
        id += k;
    }
    reverse(res.begin(), res.end());
    cout<<res.size()<<endl;
    for(auto x:res)cout<<x<<" ";
    cout<<endl;
     
}
int main(){
    for(int i = 0; i < 70; i++){
        for(int j = 0; j < 70; j++){
            ncr[i][j] = -1;
        }
    }
    for(int i = 1; i <= 60; i++){
        for(int j = 1; j <= i; j++){
            nCr(i, j);
        }
    }
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}