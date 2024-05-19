#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    string s;
    cin>>s;
    n = s.size();

    int x = s[0] - '0';
    int i = 1;
    while(i < n and s[i] == '0'){
        x *= 10;
        i++;
    }
    int y = 0;
    while(i < n){
        y *= 10;
        y += s[i] - '0';
        i++;
    }
    if(x < y){
        cout<<x<<" "<<y<<endl;
    }
    else cout<<"-1"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}