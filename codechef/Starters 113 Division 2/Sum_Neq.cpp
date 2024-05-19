#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    map<int,int> mp;
    for(auto &x:a){
        cin>>x;
        mp[x]++;
    }
    if((n == 4 and a[0]+a[1] == a[2]+a[3]) or mp.size() == 1){
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}