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
    vector<int> v(n);
    for(auto &x:v){
        cin>>x;
    }
    vector<int> ans;
    ans.pb(v[n-1]);
    for(int i = n-2; i >= 0; i--){
        if(v[i] < 10){
            ans.pb(v[i]);
        }
        else if(v[i] > ans.back()){
            int x = v[i]%10;
            int y = v[i]/10;
            if(v[i] >= 10){
                ans.pb(x);
                ans.pb(y);
            }
            else ans.pb(x);
        }
        else{
            ans.pb(v[i]);
        }
    }
    for(int i = 0; i < ans.size() - 1; i++){
        if(ans[i] < ans[i+1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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