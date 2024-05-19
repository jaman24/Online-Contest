#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v;
    map<string,int> mc;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int p;
        cin>>p;
        if(mc.find(s)==mc.end()){
            v.push_back({i+1,p});
            mc[s]++;
        }
    }
    ll ans = 0,po = 0;
    for(int i=0;i<v.size();i++){
        if(po<v[i].second){
            ans = v[i].first;
            po = v[i].second;
        }
    }
    cout<<ans<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}