#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll d,m;
    cin>>d>>m;
    ll a[m];
    for(int i=0;i<m;i++)cin>>a[i];
    ll x = 0,c=0;
    for(int i=0;i<m;i++){
        for(int j=1;j<=a[i];j++){
            
            if(x==5 and j==13)c++;
            x++;
            x%=7;
        }
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