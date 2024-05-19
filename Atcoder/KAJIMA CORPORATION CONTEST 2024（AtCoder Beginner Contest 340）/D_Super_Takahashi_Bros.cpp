#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N = 200010;
ll dp[N];
struct compare
{
    bool operator()(const pair<ll, ll> & a, const pair<ll, ll> & b)
    {
        return a.first > b.first;
    }
};
void solve(){
    int n;
    cin>>n;
    for(int i = 0; i <= n; i++)dp[i] = LLONG_MAX;
    dp[0] = 0;
    vector<ll> a(n), b(n), c(n); 
    for(int i = 1; i < n; i++)cin>>a[i]>>b[i]>>c[i];
    priority_queue<pair<ll, ll>,vector<pair<ll, ll>>,compare> pq;
    pq.push({0, 0});
    while(!pq.empty()){
        ll cost = pq.top().first;
        ll i = pq.top().second;
        pq.pop();
        if(i == n)continue;
        if(dp[i+1] > dp[i] + a[i]){
            dp[i+1] = dp[i] + a[i];
            pq.push({dp[i+1], i+1});
        }
        if(dp[c[i]] > dp[i] + b[i]){
            dp[c[i]] = dp[i] + b[i];
            pq.push({dp[c[i]], c[i]});
        }
        
    }
    cout<<dp[n]<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}