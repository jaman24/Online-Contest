#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,d;
    cin>>n>>d;
    ll b[n],c[n],pre[n];
    for(auto &x:b)cin>>x;
    for(auto &x:c)cin>>x;
    if(b[0] != c[0]){
        cout<<"NO"<<endl;
        return;
    }
    ll a[n];
    a[0] = b[0];
    ll mx = a[0];
    ll mn = a[0];
    ll cur = a[0];
    int st;
    if(n-2 >= 0 and b[n-1] > b[n-2]){
        st = 1;
    }
    else if(n-2 >= 0 and c[n-1] < c[n-2]){
        st = 0;
    }
    else st = -1;
    for(int i = n-2;i>=0;i--){
        pre[i] = st;
        if(b[i] < b[i+1]){
            st = 1;
        }
        else if(c[i] > c[i+1]){
            st = 0;
        }
    }
    for(int i = 1; i < n; i++){
        if(mx < b[i] and mn > c[i]){
            cout<<"NO"<<endl;
            return;
        }
        if(mx > b[i] or mn < c[i]){
            cout<<"NO"<<endl;
            return;
        }
        if(mn > c[i])a[i] = c[i];
        else if(mx < b[i]) a[i] = b[i];
        else{
            // next er ta barle bariye push korbo
            // nest er ta komle komiye push korbo
            // a[i] = a[i-1];
            a[i] = ?;
        }
        mx = max(b[i], mx);
        mn = min(c[i], mn);
    }
    for(int i = 1; i < n;i++){
        if(abs(a[i]-a[i-1]) > d){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    for(auto x:a)cout<<x<<" ";
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