#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,q;
    cin>>n>>q;
    ll a[n];
    for(auto &x:a)cin>>x;
    sort(a,a+n);
    reverse(a,a+n);
    vector<ll> sum(n);
    sum[0] = a[0];
    for(int i = 1;i<n;i++){
        sum[i] += sum[i-1] + a[i];
    }
    while(q--){
        ll x;
        cin>>x;
        ll ind = lower_bound(sum.begin(),sum.end(),x) - sum.begin();
        if(ind >= n){
            cout<<"-1"<<endl;
            continue;
        }
        cout<<ind+1<<endl;
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