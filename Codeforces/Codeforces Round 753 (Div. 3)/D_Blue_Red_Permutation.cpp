#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(auto &x:a)cin>>x;
    string s;
    cin>>s;
    ll t[n+2] = {0};
    for(int i = 0;i<n;i++){
        if(s[i] == 'B'){
            if(a[i]>=1){
                t[1]++;
                if(a[i]<=n){
                    t[a[i]+1]--;
                }
            }
        }
        else{
            if(a[i]<=n){
                if(a[i]<0)a[i]=1;
                t[a[i]]++;
            }
        }
    }
    for(int i = 1;i<=n;i++){
        t[i] += t[i-1]; 
        // cout<<t[i]<<" ";
    }
    // cout<<endl;
    for(int i=1;i<=n;i++){
        if(t[i] == 0){
            cout<<"NO"<<endl;
            return;
        }
    }
    ll x = t[1], l = 1;
    for(int i=2;i<=n;i++){
        if(t[i] != x){
            if(x < l){
                // cout<<i<<" "<<x<<" "<<l<<endl;
                cout<<"NO"<<endl;
                return;
            }
            x = t[i];
            l = 1;
        }
        else l++;
    }
    if(x < l){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}