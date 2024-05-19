#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> ans(n), pre(n);
    ll sum = 0;
    for(int i = 0; i < n; i++){
        sum += s[i] - '0';
        pre[i] = sum;
    }
    ll rem = 0;
    for(int i = n-1; i >= 0; i--){
        ans[i] = (pre[i]+rem)%10;
        rem = (pre[i] + rem)/10;
    }
    bool f = false;
    if(rem){
        cout<<rem;
        f = true;
    }
    for(auto x:ans){
        if(f)cout<<x;
        else if(x){
            cout<<x;
            f = true;
        }
    }
    cout<<endl;
}
int main(){
    FastIO;
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}