#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(auto &x:a)cin>>x;
    if(k>1){
        cout<<"YES"<<endl;
    }
    else{
        bool f = true;
        for(int i = 0;i<n-1;i++){
            if(a[i]>a[i+1]){
                f = false;
            }
        }
        if(f){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
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