#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n , k;
    cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]--;
    }
    bool vis[n] = {false};
    int len[n] = {0};
    ll c = 0 , id = 0 , st;
    while(!vis[id]){
        len[id] = c;
        c++;
        vis[id] = true;
        id = a[id];
    }
    // for(int i=0;i<n;i++)cout<<len[i]<< " ";
    // cout<<endl;

    c -= len[id];
    if(k<=len[id]){
        int x = 0;
        while(k--){
            x = a[x];
        }
        cout<<x+1<<endl;
        return;
    }
    k -= len[id];
    k%=(c);
    while(k--){
        id = a[id];
    }
    cout<<id+1<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}