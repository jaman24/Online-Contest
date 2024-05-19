#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    ll f = a[0], l = a[n-1];
    if(f == l){
        cout<<"YES"<<endl;
        return;
    }
    for(int i =0;i<n-1;i++){
        if(a[i] == f and a[i+1]==l){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}