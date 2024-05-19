#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n, x;
    cin>>n>>x;
    if(n%2 != x%2){
        cout<<0<<endl;
        return;
    }
    // cout<<n<<endl;
    // for(int i = 1; i <= n; i++){
    //     cout<<n<<" "<<i<<endl;
    // }
    int ans = 0;
    for(int i = 2; i <= n; i++){
        int m = n;
        int l = 0;
        bool f = true;
        while(m--){
            if(f){
                l++;
                if(l == i){
                    f = false;
                }
            }
            else{
                l--;
                if(l == 1){
                    f = true;
                }
            }
        }
        if(l == x)ans++;
        cout<<"k -> "<<i<<" "<<n<<" th is -> "<<l<<endl;
    }
    cout<<n<<" "<<x<<" Total - "<<ans<<endl;


}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}