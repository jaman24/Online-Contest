#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll h1, a1, c1, h2, a2;
    cin>>h1>>a1>>c1>>h2>>a2;
    vector<string> ans;
    while(h2 > 0){
        
        if(h1 > a2 or h2 <= a1){
            ans.push_back("STRIKE");
            h2 -= a1;
        }
        else{
            ans.push_back("HEAL");
            h1 += c1;
        }
        h1 -= a2;
    }
    cout<<ans.size()<<endl;
    for(auto x:ans){
        cout<<x<<endl;
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