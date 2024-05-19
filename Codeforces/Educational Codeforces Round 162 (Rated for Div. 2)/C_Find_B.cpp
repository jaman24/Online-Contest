#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,q;
    cin>>n>>q;
    vector<ll> v(n+1);
    for(int i = 1; i <= n; i++)cin>>v[i];
    vector<ll> pre(n+1, 0) , one(n+1, 0);
    pre[1] = v[1];
    if(v[1] == 1){
        one[1] = 1;
    }
    else{
        one[1] = 0;
    }
    for(int i = 2; i <= n; i++){
        pre[i] = pre[i-1] + v[i];
    }
    for(int i = 2; i <= n; i++){
        if(v[i] == 1)one[i] = one[i-1] + 1;
        else one[i] = one[i-1];
    }
    while(q--){
        ll l, r;
        cin>>l>>r;
        ll s = pre[r] - pre[l-1];
        ll len = r - l + 1;
        ll on = one[r] - one[l-1];
        if(len == 1){
            cout<<"NO"<<endl;
            continue;
        }
        ll big = len - on;
        s -= big;
        if(s < on*2){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
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
/*
2 2 2 = 6
1 1 4 = 6
1 1 1 1 4 = 8
2 2 2 2  = 8
1 2 2 -1 3 4 2 5
1 3 5 4 7 11 13 18
18 17 15 13 14 11 7 5
*/