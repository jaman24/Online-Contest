#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n;
    cin>>n;
    ll a[n],b[n],suma=0,sumb=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        suma+=a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        sumb+=b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    cout<<min(suma+(n*b[0]),sumb+(n*a[0]))<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}