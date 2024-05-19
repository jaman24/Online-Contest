#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n, m;
    cin>>n>>m;
    vector<int> v(n);
    for(auto &x:v)cin>>x;
    int mx = 0;
    for(int i = 0; i < m; i++){
        int x;
        cin>>x;
        mx = max(mx, x);
    }
    int st = n - mx;
    // cout<<st<<endl;
    sort(v.begin()+st, v.end());
    for(auto x:v)cout<<x<<" ";
    cout<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}