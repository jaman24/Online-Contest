#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool cmp(pair<ll, ll>& a, pair<ll, ll>& b)
{
    return a.first < b.first;
}
 
ll intersections(vector<pair<ll, ll> >& segments)
{
    ll n = segments.size();
 
    vector<pair<ll, ll> > events;
    for (ll i = 0; i < n; i++) {
        events.push_back({ segments[i].first, 1 });
        events.push_back({ segments[i].second+1, -1 });
    }
 
    sort(events.begin(), events.end());
 
    ll ans = 0, cnt = 0;
    for (ll i = 0; i < 2 * n; i++) {
        cnt += events[i].second;
        ans = max(ans, cnt);
    }
    return ans;
}
void solve(){
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>> fast,last;
    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        if(x != 1){
            last.push_back({x,y});
        }
        if(y != m){
            fast.push_back({x,y});
        }
    }
    cout<<max(intersections(fast) , intersections(last))<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}