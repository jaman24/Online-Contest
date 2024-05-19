#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int dp[100000][1001];
ll a;
void cal(int i, int s, int need, int x, ll sum, vector<ll>& v){
    if(need == s){
        a = min(sum, a);
        dp[i][s] = 1;
        return;
    }
    if(i >= v.size() or s > need or dp[i][s] == 1){
        return;
    }
    // cout<<s<<endl;
    cal(i+1, s+(v[i]%x), need, x, sum+v[i], v);
    cal(i+1, s, need, x, sum, v);
    dp[i][s] = 1;
}
void solve(){
    a = LLONG_MAX;
    ll n, x, z;
    cin>>n>>x>>z;
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    sort(v.begin(), v.end());
    ll d = z/x;
    if(z%x)d++;
    ll s = d * x;
    if(s == z){
        cout<<d<<endl;
        return;
    }
    // cout<<s - z<<endl;
    vector<ll> rem(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 1000; j++)dp[i][j] = -1;
    }
    cal(0, 0, s-z, x, 0, v);
    // cout<<a<<" "<<s-z<<endl;

    if(a == LLONG_MAX){
        cout<<-1<<endl;
        return;
    }
    cout<<(z + a)/x<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}
