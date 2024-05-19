#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    ll mn = INT_MAX, id;
    for(int i = 0;i<n;i++){
        cin>>a[i];
        if(mn > a[i]){
            id = i;
            mn = a[i];
        }
    }
    bool f = true;
    for(int i = id+1;i<n;i++){
        if(a[i]<a[i-1]){
            f = false;
            break;
        }
    }
    if(f){
        cout<<id<<endl;
    }
    else{
        cout<<-1<<endl;
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