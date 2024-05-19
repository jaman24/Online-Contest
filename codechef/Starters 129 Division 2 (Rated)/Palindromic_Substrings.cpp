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
    string s;
    cin>>s;
    if(n==1){
        cout<<"Bob"<<endl;
        return;
    }
    if(n == 2 and s[0] != s[1]){
        cout<<"Bob"<<endl;
        return;
    }
    if(n == 2){
        cout<<"Alice"<<endl;
        return;
    }
    ll c = 0, d = 0;
    for(auto a:s){
        if(a == '1')c++;
        else d++;
    }
    if(c == 0 or d == 0){
        if(n%2 == 0){
            cout<<"Alice"<<endl;
        }
        else cout<<"Bob"<<endl;
        return;
    }
    int in = 0;
    for(int i = 1; i < n; i++){
        if(s[i] != s[i-1])in++;
    }
    
    if(in%2 == 0){
        if(n%2 == 0)cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
    else{
        cout<<"Bob"<<endl;
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