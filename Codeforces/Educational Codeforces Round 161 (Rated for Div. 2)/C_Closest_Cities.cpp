#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll v[n+1];
    for(int i = 1; i <= n; i++)cin>>v[i];
    ll pre[n+2], post[n+2], clos[n+1];
    pre[0] = pre[1] = post[n] = pre[n+1] = 0;
    clos[1] = 2, clos[n] = n-1;
    for(int i = 2; i <= n-1; i++){
        if(abs(v[i] - v[i-1]) > abs(v[i] - v[i+1])){
            clos[i] = i+1;
        }
        else clos[i] = i-1;
    }
    ll sum = 0;
    for(int i = 2; i <= n; i++){
        if(clos[i-1] == i)sum += 1;
        else{
            sum += abs(v[i] - v[i-1]);
        }
        pre[i] = sum;
    }
    sum = 0;
    for(int i = n-1; i >= 1; i--){
        if(clos[i+1] == i)sum += 1;
        else{
            sum += abs(v[i+1] - v[i]);
        }
        post[i] = sum;
    }
    int q;
    cin>>q;
    while(q--){
        ll x, y;
        cin>>x>>y;
        if(x < y){
            cout<<pre[y] - pre[x]<<endl;
        }
        else{
            cout<<post[y] - post[x]<<endl;
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