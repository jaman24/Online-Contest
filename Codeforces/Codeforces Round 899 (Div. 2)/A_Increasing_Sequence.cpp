#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    ll x=1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(x==a[i]){
            x++;
        }
        x++;
    }
    x--;
    cout<<x<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}