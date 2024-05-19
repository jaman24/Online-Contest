#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    vector<int> v(n);
    bool f = true;
    int ans = 0;
    ll l = -1, r = -1;
    for(int i = 0; i < n; i++){
        cin>>v[i];
        if(f and v[i]){
            l = i;
            f = false;
        }
        if(v[i])r = i;
    }
    for(int i = l; i < r; i++){
        if(v[i]== 0){
            ans++;
        }
    }
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