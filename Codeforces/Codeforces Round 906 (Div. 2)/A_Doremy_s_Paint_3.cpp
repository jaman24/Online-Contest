#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    map<ll,ll> mp;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        mp[x]++;
    }
    if(mp.size() == 1){
        cout<<"Yes"<<endl;
    }
    else if(mp.size() == 2){
        ll a;
        for(auto [x,y]:mp){
            a = y;
            break;
        }
        ll b = n-a;
        if(abs(a-b)<=1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    else cout<<"No"<<endl;
    
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}