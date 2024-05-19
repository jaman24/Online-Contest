#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n, k;
    cin>>n >> k;
    if(n == k){
        for(int i = 0; i < n; i++){
            cout<<1<<" ";
        }
        cout<<endl;
    }
    else if(k == 1){
        for(int i = 1; i <= n; i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else cout<<"-1"<<endl;
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