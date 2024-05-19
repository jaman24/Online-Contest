#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin>>n;
    ll a[n] , b[n];
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        ll c = 0;
        while(x%2 == 0){
            c++;
            x/=2;
        }
        a[i] = c;
        b[i] = x;
    }
    ll ans = 0;
    for(int i=1;i<n;i++){
        if(b[i] <= b[i-1]){
            ll ex = 0;
            ll temp = b[i];
            while(temp < b[i-1]){
                ex++;
                temp *= 2;
            }
            if(a[i]-ex < a[i-1]){
                ll need =  a[i-1] - (a[i]-ex);
                ans+=need;
                a[i]+=need;
            }
        }
        else{
            ll ex = 0;
            ll temp = b[i-1];
            while(b[i] > temp * 2){
                ex++;
                temp *= 2;
            }
            if(a[i]+ex < a[i-1]){
                ll need =  a[i-1] - (a[i]+ex);
                ans+=need;
                a[i]+=need;
            }
        }

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