#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    string s;
    cin>>s;
    n = s.size();
    string rs = s;
    reverse(rs.begin(),rs.end());
    string x,y;
    for(int i=0;i<(n-1)/2;i++){
        x+=s[i];
    }
    for(int i=((n+3)/2)-1;i<n;i++){
        y+=s[i];
    }
    string rx = x,ry = y;
    reverse(rx.begin(),rx.end());
    reverse(ry.begin(),ry.end());
    if(x == rx and y == ry and s == rs){
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