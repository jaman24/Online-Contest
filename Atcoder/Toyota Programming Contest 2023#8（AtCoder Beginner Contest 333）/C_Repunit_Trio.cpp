#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    vector<ll> ans;
    int c = 0;
    vector<ll> nums;
    ll x = 1;
    for(int i = 0; i < 18; i++){
        nums.push_back(x);
        x *= 10;
        x += 1;
    }

    for(int i = 0; i < 18; i++){
        for(int j = i; j < 18; j++){
            for(int k = j; k < 18; k++){
                ans.push_back(nums[i] + nums[j] + nums[k]);
            }
        }
    }
    sort(ans.begin(), ans.end());
    // for(int i = 0; i < n; i++)cout<<ans[i]<<" ";
    cout<<ans[n-1]<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}