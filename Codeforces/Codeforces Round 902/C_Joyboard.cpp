#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    if(k>3){
        cout<<0<<endl;
        return;
    }
    if(n==1){
        if(k==1){
            cout<<1<<endl;
        }
        else if(k==2){
            cout<<m<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    else{
        if(k == 1){
            cout<<1<<endl;
        }
        else if(k==2){
            if(m==0){
                cout<<0<<endl;
            }
            else if(m<=n){
                cout<<m<<endl;
            }
            else{
                ll x=m/n;
                cout<<x+(n-1)<<endl;
            }
        }
        else{
            if(m<=n){
                cout<<0<<endl;
            }
            else{
                ll x=m/n;
                cout<<m-x-(n-1)<<endl;
            }
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