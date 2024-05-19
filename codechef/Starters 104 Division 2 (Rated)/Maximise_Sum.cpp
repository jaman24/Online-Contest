#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    if(n>2){
        int i = 0, j = n-1;
        if(a[i]<=a[i+1]){
            while(i<n-1 and a[i]>=a[i+1]){
                i++;
            }
        }

        if(a[j]<=a[j-1]){
            while(j>0 and a[j]<=a[j-1]){
                j--;
            }
        }
        // cout<<i<< " " <<j<<endl;
        if(i<j){
            ll mx = 0;
            for(int k = i;k<=j;k++){
                mx= max(mx,a[k]);
            }
            // cout<<mx<<endl;
            ll x = i , y = a[i];
            while(a[x]<mx){
                if(a[x]<=y){
                    a[x]=y;
                }
                else{
                    y = a[x];
                }
                x++;
            }
            x = j , y = a[j];
            while(a[x]<mx){
                if(a[x]<=y){
                    a[x]=y;
                }
                else{
                    y = a[x];
                }
                x--;
            }
        }
    }
    ll ans = 0;
    for(int i=0;i<n;i++){
        ans+=a[i];
        // cout<<a[i]<< " ";
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