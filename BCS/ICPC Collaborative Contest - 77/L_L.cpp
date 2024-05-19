#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i] -= 1;
    }
    for(int i = 0; i < n; i++){
        ll temp[n];
        for(int j=0;j<n;j++)temp[j] = a[j];
        for(int j = 0;j < n; j++){
            a[j] = temp[a[j]];
        }
    }
    bool f = true;
    for(int i=0;i<n;i++){
        if(a[i]!=i){
            f=false;
            break;
        }
    }
    if(f){
        printf("All can eat.\n");
    }
    else{
        printf("Some starve.\n");
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