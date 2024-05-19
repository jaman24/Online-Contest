#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll a, b, c;
    cin>>a>>b>>c;
    if(a < b and b < c){
        cout<<"STAIR"<<endl;
    }
    else if(a < b and b > c){
        cout<<"PEAK"<<endl;
    }
    else cout<<"NONE"<<endl;
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