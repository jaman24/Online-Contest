#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll> dist;
    ll c = 0;
    for(int i=n-1;i>=0;i--){
        if(s[i] == '0'){
            ll d = n -1 - c - i;
            c++;
            dist.push_back(d);
        }
    }
    for(int i=1;i<c;i++)dist[i] += dist[i-1];
    for(auto x:dist)cout<<x<<" ";
    for(int i=c;i<n;i++)cout<<"-1"<<" ";
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