#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    int n;
    cin>>n;
    int dp[n+1];
    for(int i = 0;i<=n;i++)dp[i]=INT_MAX/2;
    dp[0] = 0;
    for(int i = 1;i<=n;i++){
        int z = i;
        while(z){
            int d = z%10;
            z/=10;
            if(d<=i){
                dp[i] = min(dp[i-d]+1 , dp[i]);
            }
        }
    }
    cout<<dp[n]<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}