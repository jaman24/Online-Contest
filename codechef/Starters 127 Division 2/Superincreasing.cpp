#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n, k , x;
    cin>>n>>k>>x;
    while(x){
        x/=2;
        k--;
    }
    // cout<<p<<endl;
    if(k <= 0){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
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