#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>
const int N = 100010;
ll dp[N][2];
ll cal(int i, vector<string>& s, vector<string>& rs, vector<ll>& v, int p){
    if(i >= s.size())return 0;
    if(dp[i][p] != -1)return dp[i][p];
    ll ans = LLONG_MAX/2;
    if(i == 0){
        return min(cal(i+1, s, rs, v, 0), cal(i+1, s, rs, v, 1)+v[i]);
    }
    if(p){
        if(rs[i-1] <= s[i]){
            ans = min(ans, cal(i+1, s, rs, v, 0));
        }
        if(rs[i-1] <= rs[i]){
            ans = min(ans, cal(i+1, s, rs, v, 1) + v[i]);
        }
    }
    else{
        if(s[i-1] <= s[i]){
            ans = min(ans, cal(i+1, s, rs, v, 0));
        }
        if(s[i-1] <= rs[i]){
            ans = min(ans, cal(i+1, s, rs, v, 1) + v[i]);
        }
    }
    return dp[i][p] = ans;
}
void solve(){
    memset(dp, -1, sizeof dp);
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    vector<string> s(n), rs(n);
    for(int i = 0; i < n; i++){
        string k;
        cin>>k;
        s[i] = k;
        reverse(all(k));
        rs[i] = k;
    }
    ll ans = cal(0, s, rs, v, 0);
    if(ans == LLONG_MAX/2){
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
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