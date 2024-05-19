#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,s,r;
    cin>>n>>s>>r;
    ll mx = s - r;
    vector<ll> ans;
    ans.push_back(mx);
    for(int i=2;i<=n;i++){
        ll ned = n - i;
        if(r - mx >= ned){
            ans.push_back(mx);
            r -= mx;
            continue;
        }
        while(r - mx < ned){
            mx--;
        }
        r -= mx;
        ans.push_back(mx);
    }
    for(auto x:ans)cout<<x<<" ";
    cout<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}