#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(auto &x:a)cin>>x;
    sort(a, a+n);
    ll dis = a[n-1] - a[0];
    vector<ll> res;
    while(dis > 1){
        if(a[0]%2){
            res.push_back(1);
            for(int i = 0;i<n;i++)a[i] = (a[i]+1)/2;
        }
        else{
            res.push_back(0);
            for(int i = 0;i<n;i++)a[i]/=2;
        }
        dis = a[n-1] - a[0];
    }
    if(dis == 1){
        if(a[0]%2){
            res.push_back(1);
        }
        else{
            res.push_back(0);
        }
    }
    cout<<res.size()<<endl;
    if(res.size()<=n and res.size()){
        for(auto x:res)cout<<x<<" ";
        cout<<endl;
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