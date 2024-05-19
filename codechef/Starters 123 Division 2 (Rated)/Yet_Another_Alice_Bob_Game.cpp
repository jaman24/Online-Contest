#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

void solve(){
    ll n,a,b;
    cin>>n>>a>>b;
    if(n <= a or a > b){
        cout<<"Alice"<<endl;
        return;
    }
    if(b > a){
        cout<<"Bob"<<endl;
        return;
    }
    if(n%(a+1) == 0){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Alice"<<endl;
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