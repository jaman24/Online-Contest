#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
const int N = 100001;
void solve(){
    
    ll n;
    cin>>n;
    ll a[n];
    for(auto &x:a)cin>>x;
    
    int N = n * 1001;
    bool dp[N];
    memset(dp, false, sizeof dp);
    dp[0] = true;
    for(int i = 0; i < n; i++){
        for(int j = n*1000; j >= 0; j--){
            if(j - a[i] >= 0 and dp[j - a[i]]){
                dp[j] = true;
            }
        }
    }
    vector<ll> ans;    
    for(int i = 1; i < N; i++)if(dp[i])ans.push_back(i);
    cout<<ans.size()<<endl;
    for(auto x:ans)cout<<x<<" ";
    cout<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}