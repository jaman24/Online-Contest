#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string s = "314159265358979323846264338327";
void solve(){
    string k;
    cin>>k;
    ll c = 0;
    for(int i = 0;i<k.size();i++){
        if(k[i] == s[i])c++;
        else break;
    }
    cout<<c<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}