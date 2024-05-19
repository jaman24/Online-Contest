#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v;
    for(int i=0;i<n;i++){
        ll st,len;
        cin>>st>>len;
        // cout<<st+len<<endl;
        v.push_back({st , st+len});
    }
    sort(v.begin(),v.end());
    priority_queue<ll, vector<ll>, greater<ll> > pq;
    ll ans = 0, cur = 0, i = 0;
    while(i<n){
        ll x = v[i].first;
        // cout<<x<<endl;
        while(i<n and v[i].first == x){
            pq.push(v[i].second);
            i++;
        }
        
        if(i<n){
            cur = v[i].first;
            // cout<<"CUR - > "<<cur<<endl;
            while(!pq.empty() and cur>x){
                if(x<=pq.top()){
                    ans++;
                    x++;
                }
                pq.pop();
            }
        }
        else{
            // cout<<"X - > "<<x<<endl;
            while(!pq.empty()){
                if(x<=pq.top()){
                    ans++;
                    x++;
                }
                pq.pop();
            }
        }
        // cout<<"ANS - > "<<ans<<endl;
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