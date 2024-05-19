#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll ans = 0,l = 0;
    bool f=true;
    for(int i=0;i<n;i++){
        if(f and s[i] == 'B'){
            l=i;
            f=false;
        }
        if(s[i] == 'B'){
            if(i-l>=k){
                ans++;
                l=i;
            }
        }
    }
    if(!f)ans++;
    cout<<ans<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}