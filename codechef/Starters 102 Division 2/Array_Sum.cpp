#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
ll m = 1e5;
void solve(){
    ll n,k;
    cin>>n>>k;
    ll h = n/2;
    ll mx = (h*m)+(h*(m-1));
    if(((h*2) + h) > k || (h%2 != k%2) || mx<k){
        cout<<-1<<endl;
    }
    else{
        for(int i=h;i>=1;i--){
            ll rem = ((i-1)*2)+h;
            // cout<<i<<" ";
            if(k-m>=rem){
                cout<<m<<" ";
                k-=m;
            }
            else{
                cout<<2<<" ";
                k-=2;
            }
        }
        for(int i=h;i>1;i--){
            ll rem = i-1;
            // cout<<i<<" ";
            if(k-m-1>=rem){
                cout<<m-1<<" ";
                k-=m-1;
            }
            else{
                cout<<1<<" ";
                k-=1;
            }
        }
        cout<<k<<endl;
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