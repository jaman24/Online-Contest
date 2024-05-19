#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n,k;
    cin>>n>>k;
    ll a[n],h[n],pre[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    pre[0]=a[0];
    for(int i=1;i<n;i++){
        pre[i] = pre[i-1]+a[i];
    }

    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    ll div[n],pre_div[n];
    for(int i=0;i<n-1;i++){
        if(h[i]%h[i+1]){
            div[i] = 1;
        }
        else div[i] = 0;
    }
    div[n-1]=0;
    pre_div[0] = div[0];
    for(int i=1;i<n;i++){
        pre_div[i] = pre_div[i-1] + div[i];
    }
    ll l=0,r=n;

    while(l<r){
        ll mid = (l+r+1)/2;
        // cout<<mid<<" "<<l<<" "<<r<<endl;

        bool f=false;
        for(int i=0;i<n-mid+1;i++){
            ll d = pre_div[i+mid-1] - div[i+mid-1];
            if(i>0){
                d -= pre_div[i-1];
            }
            ll sum = pre[i+mid-1];
            if(i>0) sum -= pre[i-1];

            if(d==0 and sum<=k){
                f=true;
                break;
            }
            // cout<<f<<" "<<i<<" "<<d<< " sum- "<<sum<<endl;
        }
        if(!f){
            r = mid-1;
        }
        else l=mid;

    }
    cout<<l<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}