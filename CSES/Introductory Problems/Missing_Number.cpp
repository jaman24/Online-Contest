#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n-1];
    for(auto &x:a)cin>>x;
    sort(a,a+n-1);
    for(int i = 0;i<n-1;i++){
        if(a[i]!=i+1){
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<n<<endl;
}
int main(){
    int cn = 1;
    // cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}