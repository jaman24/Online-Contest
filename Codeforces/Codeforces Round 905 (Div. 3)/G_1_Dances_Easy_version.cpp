#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n, k;
    cin>>n>>k;
    ll a[n],b[n];
    a[0] = 1;
    for(int i=1;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    // for(auto x:a)cout<<x<< " ";
    // cout<<endl;
    // for(auto x:b)cout<<x<<" ";
    // cout<<endl<<endl;;
    ll ans = 0,j=n-1;
    for(int i=n-1;i>=0;i--){
        if(j>=0 and b[i]>a[j]){
            ans++;
            j--;
        }
        else{
            while(j>=0 and b[i]<= a[j]){
                j--;
            }
            if(j>=0 and b[i]>a[j]){
                ans++;
                j--;
            }
        }
    }
    cout<<n-ans<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}