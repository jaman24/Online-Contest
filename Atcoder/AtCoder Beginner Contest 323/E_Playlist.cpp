#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 998244353;
ll dp[10000005] = {0};

void solve(){
    ll n,x;
    cin>>n>>x;
    ll min[n];
    ll sum = 0;
    for(int i=0;i<n;i++){
        cin>>min[i];
        sum += min[i];
    }
    ll c = 0;
    dp[0] = 1;
    for(int m=1;m<=sum;m++){
        for(int i=1;i<n;i++){
            if(m>=min[i]){
                if(i==0){
                    c+=dp[m-min[i]];
                    c%=MOD;
                }
                dp[m]+=dp[m-min[i]];
                dp[m]%=MOD;
            }
        }
    }
    for(int i=1;i<=sum;i++)cout<<dp[i]<<" ";
    cout<<endl;
    cout<<c<<" "<<dp[sum]<<endl;

}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}