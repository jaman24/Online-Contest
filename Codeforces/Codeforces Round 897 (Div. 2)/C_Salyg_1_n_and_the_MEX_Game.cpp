#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll mn=n;
    for(int i=0;i<n;i++){
        if(a[i]!=i){
            mn=i;
            break;
        }
    }
    cout<<mn<<endl;
    cout<<endl;
    ll x;
    while(1){
        cin>>x;
        if(x==-1){
            return;
        }
        else{
            cout<<x<<endl;
            cout<<endl;
        }
    }

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}