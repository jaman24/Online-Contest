#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n, m;
    cin>>n>>m;
     if(2*n<m)cout<<0<<endl;
     else if(n>m){
        cout<<(m-1)/2<<endl;
     }else if(n==1 || m<=2){ cout<<0<<endl;}
     else if(n == m){
        cout<<(n - 1)/2<<endl;
     }
     else{
        cout<<(2*n-m+1)/2<<endl;
     }
   
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}