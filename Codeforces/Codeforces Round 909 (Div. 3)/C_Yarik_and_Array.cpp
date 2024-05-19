#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
ll maxSubArraySum(vector<ll>& a)
{
    ll max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < a.size(); i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    ll ans = - LLONG_MAX;
    ll p = abs(a[0]%2);
    vector<ll> v;
    v.push_back(a[0]);
    for(int i = 1;i<n;i++){
        if(abs(a[i]%2) == p){
            ans =max(ans, maxSubArraySum(v));
           
            v.clear();
        }
        v.push_back(a[i]);
        p = abs(a[i]%2);

    }
    ans =max(ans, maxSubArraySum(v));
    
    cout<<ans<<endl;
    
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}