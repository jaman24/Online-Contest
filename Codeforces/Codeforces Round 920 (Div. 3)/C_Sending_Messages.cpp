#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,f,a,b;
    cin>>n>>f>>a>>b;
    ll t[n];
    for(auto &x:t)cin>>x;
    ll last = 0;
    for(int i = 0; i < n; i++){
        ll len = t[i] - last;
        ll need = min(a * len, b );
        if(f <= need){
            // cout<<"NO"<<" "<<i<<" "<<need<<" "<<f<<endl;
            cout<<"NO"<<endl;
            return;
        }
        f -= need;
        last = t[i];
        // cout<<f<<" "<<need<<" "<<len<<endl;

    }
    cout<<"YES"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}