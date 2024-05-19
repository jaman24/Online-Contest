#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    string s;
    cin>>s;
    ll n = s.size();
    int i = 0;
    while(i < n and s[i] == 'A')i++;
    while(i < n and s[i] == 'B')i++;
    while(i < n and s[i] == 'C')i++;
    if(i == n){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;

}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}