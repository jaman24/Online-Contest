#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
const int N = 1000005;
map<ll,ll> mp;
bool vis[N] = {false};
void prime(){
    for(int i = 2; i < N; i++){
        if(!vis[i]){
            mp[i]++;
            for(int j = i + i; j < N; j += i){
                vis[j] = true;
            }
        }
    }
}
void solve(){
    ll n;
    cin>>n;
    if(mp.find(n) != mp.end()){
        cout<<1<<endl;
        return;
    }
    ll ans = 1;
    ll k = 1;
    ll sum = 1;
    while(k <= n){
        if(k == n){
            cout<<ans<<endl;
            return;
        }
        ll rem = n - k;
        if(mp.find(rem) != mp.end()){
            cout<<ans+1<<endl;
            return;
        }
        sum *= 2;
        k += sum;
        ans++;
    }
    cout<<"-1"<<endl;
}
int main(){
    prime();
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}