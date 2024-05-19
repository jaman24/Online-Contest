#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    int n;
    cin>>n;
    map<int, int> mp, mq;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    for(int j = 0; j < n; j++){
        int x;
        cin>>x;
        mq[x]++;
    }
    int ans = 0, mx = 0, my = 0;
    for(auto [x,y]:mq){
        if(y == 1 and mp.find(x) != mp.end()){
            ans += mp[x];
        }
        else if(mp.find(x) != mp.end()){
            if(y == 2){
                my = max(my, mp[x]);
            }
        }
    }
    for(auto [x,y]:mp){
        if(mq.find(x) == mq.end()){
            mx = max(mx, y);
        }
    }
    // cout<<my<<" "<<mx<<endl;
    cout<<min(ans+mx+my, n)<<endl;

}
int main(){
    FastIO;
    int cn = 1;
    // cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}