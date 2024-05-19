#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll array[n];
    for(int i=0;i<n;i++){
      cin>>array[i];
    }
    ll suf[n],pref[n];
    suf[n-1] = array[n-1];
    pref[0] = array[0];
    for(int i=1;i<n;i++){
        pref[i] = pref[i-1] + array[i];
    }
    for(int i=n-2;i>=0;i--){
        suf[i]  = suf[i+1] + array[i];
    }
    ll ans = LLONG_MAX , id=-1;
    for(int i=0;i<n;i++){
        // cout<<suf[i] + pref[i]<<endl;
        if(suf[i] + pref[i] < ans){
            id = i+1;
            ans = suf[i] + pref[i];
        }
    }
    cout<<id<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}