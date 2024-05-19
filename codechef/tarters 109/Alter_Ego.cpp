#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    vector<ll> z,b;
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        if(x%2)b.push_back(x);
        else z.push_back(x);
    }    
    if(z.size()%2 or b.size()%2){
        cout<<"-1"<<endl;
        return;
    }
    sort(z.begin(),z.end());
    reverse(z.begin(),z.end());
    sort(b.begin(),b.end());
    reverse(b.begin(),b.end());
    ll ans[n];
    ll id = 0,nid = n/2;
    ll sz = z.size()/2;
    for(int i = 0; i < sz;i++){
        ll y = z[i] - z[i+sz];
        y/=2;
        ll x = z[i] - y;
        ans[id++] = x;
        ans[nid++] = y;
    }
    sz = b.size()/2;
    for(int i = 0; i < sz;i++){
        ll y = b[i] - b[i+sz];
        y/=2;
        ll x = b[i] - y;
        ans[id++] = x;
        ans[nid++] = y;
    }
    for(auto x:ans)cout<<x<<" ";
    cout<<endl;
    
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}