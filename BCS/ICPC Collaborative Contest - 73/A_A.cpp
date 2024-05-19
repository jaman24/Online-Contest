#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n;
    cin>>n;
    char a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll ans = 0;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1])ans++;
    }
    cout<<ans<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}