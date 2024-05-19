#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,x;
    cin>>n>>x;
    string s;
    cin>>s;
    int d = x;
    for(auto c:s){
        if(c == '1')d = 0;
        else d++;
        if(d > x){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}