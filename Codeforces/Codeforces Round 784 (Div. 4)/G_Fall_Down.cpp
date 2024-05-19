#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,m;
    cin>>n>>m;
    string s[n];
    for(auto &x:s)cin>>x;
    for(int i = 0; i < m; i++){
        ll j = n-1, k = n-1;
        while(j >= 0){
            if(s[j][i] == 'o'){
                k = j-1;
            }
            else if(s[j][i] == '*'){
                s[j][i] = '.';
                s[k][i] = '*';
                k--;
            }
            j--;
        }
    }
    for(auto x:s)cout<<x<<endl;
    cout<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}