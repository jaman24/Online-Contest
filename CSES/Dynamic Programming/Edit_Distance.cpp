#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
string s,t;
int dp[5005][5005];
ll cal(int i,int j){
    if(i>=s.size() || j>=t.size()){
        return  max(s.size()-i , t.size()-j);
    }
    
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    
    if(s[i] == t[j]){
        return dp[i][j] = cal(i+1,j+1);
    }
    
    return dp[i][j] = min(cal(i+1,j+1) , min(cal(i,j+1),cal(i+1,j)))+1; 
    
}
void solve(){
    memset(dp,-1,sizeof(dp));
    cin>>s>>t;
    cout<<cal(0,0)<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}