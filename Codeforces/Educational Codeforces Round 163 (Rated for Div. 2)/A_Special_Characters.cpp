#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

void solve(){
    ll n;
    cin>>n;
    if(n % 2){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    string s;
    n/=2;
    for(int i = 'A'; i < n + 'A'; i++ ){
        s += i;
        s += i;
    }
    cout<<s<<endl;
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