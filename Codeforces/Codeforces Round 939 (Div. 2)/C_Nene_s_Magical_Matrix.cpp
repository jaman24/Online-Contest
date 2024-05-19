#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n;
    cin>>n;
    int gd[n][n];
    vector<pair<ll, ll>> ans;
    for(int i = 0; i < n; i++){
        ans.push_back({1, i+1});
        for(int j = 0; j < n; j++){
            gd[i][j] = n-j;
        }
        ans.push_back({2, i+1});
        for(int j = 0; j < n; j++){
            gd[j][i] = n-j;
        }
    }
    ll tot = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)tot += gd[i][j];
    }
    cout<<tot<<" "<<ans.size()<<endl;
    for(auto [x,y]:ans){
        cout<<x<<" "<<y<<" ";
        for(int i = n; i > 0; i--){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
}
int main(){
    FastIO;
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}