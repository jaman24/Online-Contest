#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans = 0;
    ll c = 0;
    for(int i = 0;i<n-1;i++){
        if(s[i] == '>'){
            c++;
        }
        else{
            ans += (c*(c+1))/2;
            c = 0;
        }
    }
    ans += (c*(c+1))/2;

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