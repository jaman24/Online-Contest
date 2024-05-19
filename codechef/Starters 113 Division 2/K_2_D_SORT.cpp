#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool myComparison(const pair<int,int> &a,const pair<int,int> &b)
{
    if(a.first > b.first)return false;
    if(a.first == b.first and a.second < b.second)return false;
    return true;
}
void solve(){
    ll n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        ll x,y;
        cin>>x>>y;
        v[i] = {x, y};
    }
    // a,b a>b
    sort(v.begin(),v.end(),myComparison);
    for(auto [x,y]:v)cout<<x<<" "<<y<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}