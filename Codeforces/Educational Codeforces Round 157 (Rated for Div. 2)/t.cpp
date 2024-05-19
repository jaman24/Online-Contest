#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    getchar();
   set<string> s;
   string x;
   ll id = 1;
   for(int i = 0;i<n;i++){
    getline(cin, x);
    if(s.find(x) == s.end()){
        cout<<id++<<" "<<x<<endl;
        s.insert(x);
    }
   }
   cout<<s.size()<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}