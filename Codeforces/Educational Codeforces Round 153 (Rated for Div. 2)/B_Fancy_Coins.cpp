#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll m, k, a1, ak;
    cin>>m>>k>>a1>>ak;
    ll reg = a1 + (ak * k);
    if(reg >= m){
        if(m%k <= a1){
            cout<<"0"<<endl;
        }
        else{
            cout<<m%k - a1<<endl;
        }
    }
    else{
        ll need = m - (ak * k);
        if(a1 >= k){
            need -= a1 - (k-1);
            a1 = k-1;
        }
        ll ans = need/k;
        ll rem = need % k;
        // cout<<need<<endl;
        if(rem > a1){
            ans+=rem-a1;
        }
        cout<<ans<<endl;

    }

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}