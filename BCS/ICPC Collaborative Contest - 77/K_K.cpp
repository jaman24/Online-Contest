#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    map<string ,ll> mp;
    ll dis = INT_MAX;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(mp.find(s)!=mp.end()){
            ll last = mp[s];
            dis = min(dis , i - last);
        }
        mp[s] = i;
    }
    if(dis == INT_MAX)dis = n;
    cout<<n-dis<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}