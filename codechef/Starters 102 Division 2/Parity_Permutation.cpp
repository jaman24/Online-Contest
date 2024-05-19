#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n,p;
    cin>>n>>p;
    ll od = 0, ev = 0;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x%2)od++;
        else ev++;
    }
    if(p==0){
        if(od == 0 || ev ==0){
            ll ans = 1;
            for(int i=2;i<=n;i++){
                ans*=i;
                ans%=mod;
            }
            cout<<ans<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    else{
        if(n%2==0){
            if(n/2 != od){
                cout<<0<<endl;
            }
            else{
                ll ans = 1;
                for(int i=2;i<=ev;i++){
                    ans*=i;
                    ans%=mod;
                }
                ans*=ans;
                ans%=mod;
                ans*=2;
                ans%=mod;
                cout<<ans<<endl;
            }
        }
        else{
            if(n/2 != min(od,ev)){
                cout<<0<<endl;
            }
            else{
                ll odd = 1, even = 1;
                for(int i=2;i<=ev;i++){
                    even*=i;
                    even%=mod;
                }
                for(int i=2;i<=od;i++){
                    odd*=i;
                    odd%=mod;
                }
                ll ans = odd * even;
                ans%=mod;
                cout<<ans<<endl;
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