#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n],b[n],ca[n],cb[n];
    bool fb[2*n + 5] = {false};
    vector<vector<ll>> color((2*n)+5);
    for(auto &x:a)cin>>x;
    for(int i = 0;i<n;i++){
        cin>>ca[i];
        color[ca[i]].push_back(a[i]);
    }
    for(auto &x:b)cin>>x;
    for(int i = 0;i<n;i++){
        cin>>cb[i];
        fb[cb[i]] = true;
        color[cb[i]].push_back(b[i]);
    }
    // for(auto x:color){
    //     sort(x.rbegin(),x.rend());
    // }
    for(int i = 0; i < 2*n+5;i++){
        sort(color[i].begin(), color[i].end(),greater<ll>());
        // for(auto x:color[i])cout<<x<<" ";
        // cout<<endl;
    }
    
    ll pre = 0;
    for(int i = 0; i < n; i++){
        if(!fb[ca[i]]){
            if(pre > a[i]){
                cout<<"No"<<endl;
                return;
            }
            pre = a[i];
            continue; 
        }
        while(color[ca[i]].size() and color[ca[i]].back() < pre){
            color[ca[i]].pop_back();
        }
        if(color[ca[i]].empty()){
            cout<<"No"<<endl;
            return;
        }
        pre = color[ca[i]].back();
        color[ca[i]].pop_back();
    }
    cout<<"Yes"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}