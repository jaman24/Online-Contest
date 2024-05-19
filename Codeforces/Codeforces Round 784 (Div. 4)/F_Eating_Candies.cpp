#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(auto &x:a){
        cin>>x;
    }
    // ll sum[n] = {0},lsum[n]={0};
    // sum[0] = a[0], lsum[n-1] = a[n-1];
    // for(int i = 1;i<n;i++){
    //     sum[i] = sum[i-1] + a[i];
    // }
    // for(int i = n-2;i>=0;i--){
    //     lsum[i] = lsum[i+1] + a[i];
    // }
    ll i = 0, j = n-1;
    ll ans = 0, al = 0, bb = 0, c = 0;
    while(i <= j){
        if(al == bb){
            ans = c;
            al += a[i];
            i++;
            c++;
        }
        while(i<=j and al < bb){
            al += a[i];
            i++;
            c++;
        }
        if(al == bb){
            ans = c;
            al += a[i];
            i++;
            c++;
        }
        while(i<=j and al > bb){
            bb += a[j];
            j--;
            c++;
        }
        if(al == bb){
            ans = c;
            al += a[i];
            i++;
            c++;
        }
        // cout<<i<<" "<<j<<" "<<al<<" "<<bb<<" "<<c<<endl;
    }
    // cout<<c<<endl;
    if(al == bb){
        ans = c;
    }
    cout<<ans<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}