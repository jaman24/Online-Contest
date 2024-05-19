#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N = 1000001;
ll ans[N];
void fill(){
    for(ll i = 1;i<N;i++){
        ans[i] = i*i;
    }
    ll l = 1, x = 1;
    for(ll i = 1; i<N ;i++){
        if(i > x){
            l+=1;
            x+=l;
        }
        // cout<<i<<" "<<i+l<<" "<<i+l+1<<endl;
        if(i+l < N)ans[i+l] += ans[i];
        if(i+l+1 < N)ans[i+l+1] += ans[i];
        if(i + l + l + 2 < N){
            ans[i+l+l+2] -= ans[i];
        }
    }
}
void solve(){
    ll n;
    cin>>n;
    cout<<ans[n]<<endl;
       
}
int main(){
    fill();
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}