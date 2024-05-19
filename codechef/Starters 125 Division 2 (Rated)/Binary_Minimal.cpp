#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

void solve(){
    ll n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    int a = 0;
    for(int i = 0; i < n; i++){
        if(a == k)break;
        if(s[i] == '1'){
            s[i] = '0';
            a++;
        }
    }
    bool f = false;
    for(auto x:s){
        if(x == '1')f = true;
    }
    ll x;
    if(f){
        x = k - a;
    }
    else x = a + k - a;
    for( int i = x; i < n; i++)cout<<s[i];
    cout<<endl;


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