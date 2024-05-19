#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    map<pair<ll,ll>,ll> mp;
    string  s[n];
    for(int i = 0; i < n; i++){
        cin>>s[i];
    }
    for(int i = 0; i < n; i++){
        ll c = 0;
        for(int j = 0; j < s[i].size(); j++){
            c += s[i][j] - '0';
        }
        mp[{s[i].size(), c}]++;
    
    }
    // for(auto [x,y]:mp){
    //     cout<<x.first<<" "<<x.second<<" "<<y<<endl;
    // }
    // cout<<endl;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ll ts = 0;
        for(int j = 0; j < s[i].size(); j++){
            ts += s[i][j] - '0';
        }
        ll len = s[i].size();
        ll cur = 0;
        for(int j = 0; j < len; j++){
            cur += s[i][j] - '0';
            if(j+1 > len/2){
                ll r_sum = cur - (ts - cur);
                ll l = (j+1) - (len - 1 - j);
                ans += mp[{l , r_sum}];
                // cout<<j<<" "<<l<<" "<<r_sum<<" "<<mp[{l,r_sum}]<<endl;
            }
            if(j <= (len-1)/2){
                ll r_cur  = cur - (s[i][j] - '0');
                ll r_sum = (ts - r_cur) - r_cur;
                ll l = (len - (2 * (j)));
                ans += mp[{l, r_sum}];
                // cout<<j<<" "<<l<<" "<<r_sum<<" "<<mp[{l,r_sum}]<<endl; 
            }
        }
        cout<<endl;
        
    }
    for(auto [x,y]:mp)ans -= (y * y);
    cout<<ans<<endl;
}
int main(){
    int cn = 1;
    // cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}