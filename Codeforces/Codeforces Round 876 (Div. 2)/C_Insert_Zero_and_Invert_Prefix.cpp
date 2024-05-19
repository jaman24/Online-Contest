#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(auto &x:a)cin>>x;
    if(a[n-1]){
        cout<<"NO"<<endl;
    }
    else{
        vector<ll> ans;
        cout<<"YES"<<endl;
        bool f = true;
        ll c = 0;
        for(int i = 0;i < n; i++){
            if(a[i] == 0){
                ans.push_back(c);
                c = 0;
            }
            else{
                c++;
            }
        }
        reverse(ans.begin(),ans.end());
        for(auto x:ans){
            for(int i = 0; i < x;i++){
                cout<<0<<" ";
            }
            cout<<x<<" ";
        }
        cout<<endl;
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