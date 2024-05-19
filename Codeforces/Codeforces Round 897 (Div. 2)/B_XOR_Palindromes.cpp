#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll req = 0;
    for(int i=0;i<n/2;i++){
        if(s[i]!= s[n-i-1])req++;
    }
    // cout<<req<<endl;
    for(int i=0;i<=n;i++){
        if(n%2){
            ll mx = n-req;
            ll rem = i-req;
            if(i<=mx and rem>=0){
                cout<<1;
            }
            else{
                cout<<0;
            }
        }
        else{
            ll mx = n-req;
            ll rem = i-req;
            if(i<=mx and rem>=0 and rem%2==0){
                cout<<1;
            }
            else{
                cout<<0;
            }
        }
    }
    cout<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}