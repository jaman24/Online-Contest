#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,x;
    cin>>n>>x;
    ll a[n],b[n];
    vector<pair<ll,ll>> v(n);
    for(auto &x:a){
        cin>>x;    
    }
    for(auto &x:b)cin>>x;

    for(ll i = 0;i<n;i++)v[i] = {a[i],i};
    sort(v.begin(),v.end());
    sort(b,b+n);

    ll ans[n] = {0};
    ll j = x-1, k = n-1;
    while(j>=0){
        ans[v[k].second] = b[j];
        j--;
        k--;
    }
    j = x, k = 0;
    while(j<n){
        ans[v[k].second] = b[j];
        j++;
        k++;
    } 
    ll c = 0;
    for(int i = 0;i<n;i++){
        if(a[i] > ans[i])c++;
    }
    if(c!=x){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
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