#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 998244353;
ll fact[200010];
void fa(){
    fact[0]=1;
    fact[1] = 1;
    for(int i=2;i<200005;i++){
        fact[i] = (fact[i-1]*i)%mod;
    }
}
void solve(){
    string s;
    cin>>s;
    ll ans = 1,res = 0,x=0;
    ll c = 1;
    vector<ll> v;
    for(int i=1;i<s.size();i++){
        if(s[i-1]!=s[i]){
            if(c>1){
                ans *=c;
                ans%=mod;
                res+=(c-1);
            }
            c=1;
        }
        else c++;
    }
    if(c>1){
        ans *=c;
        ans%=mod;
        res+=(c-1);
    }
    // cout<<ans<<endl;
    ans*=fact[res];
    ans%=mod;
    
    cout<<res<<" "<<ans<<endl;
    

}
int main(){
    fa();
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}