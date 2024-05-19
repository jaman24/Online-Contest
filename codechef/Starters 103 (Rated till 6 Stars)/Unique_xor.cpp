#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<ll,pair<ll,ll>> mp;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            mp[(i+1)%k].first++;
        }
        else{
            mp[(i+1)%k].second++;
        }
    }
    ll ans1 = 0,ans2 = 0;
    for(auto [x,y]:mp){
        // cout<<x<<" "<<y.first<< " "<<y.second<<endl;
        if(y.second){
            ans1+=y.first;
        }
        else{
            ans1 += INT_MAX;
        }
        ans2 += y.second/2;
        if(y.second%2)ans2+=2;
    }
    // cout<<endl;
    cout<<min(ans1,ans2)<<endl;

}
int main(){
    int cn = 1;
   
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}