#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll c = 0;
    for(int i = 0;i<n;i++){
        if(s[i] == 'B')c++;
    }
    // cout<<c<<" "<<k<<endl;
    if(c == k){
        cout<<0<<endl;
        return;
    }
    if(k == 0 and c){
        cout<<1<<endl;
        cout<<n<<" "<<"A"<<endl;
        return;
    }
    ll a = 0, ans = INT_MAX;
    for(int i = 0;i<n;i++){
        if(s[i] == 'B')a++;
        ll rem = c - a;
        if(rem + i + 1 == k){
            cout<<1<<endl;
            cout<<i+1<<" "<<"B"<<endl;
            return;
        }
        if(c - a == k){
            cout<<1<<endl;
            cout<<i+1<<" "<<"A"<<endl;
            return;
        }
    }
    cout<<2<<endl;
    cout<<n<<" "<<"B"<<endl;
    cout<<n-k<<" "<<"A"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}