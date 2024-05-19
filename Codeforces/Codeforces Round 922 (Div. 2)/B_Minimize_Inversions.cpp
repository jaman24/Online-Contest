#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool cmp(pair<int,int>& a, pair<int,int>& b){
    if(a.second > b.second and a.first > b.first)return false;
    int x = abs(a.first - b.first);
    int y = abs(a.second - b.second);
    if(a.first > b.first and x >= y)return false;
    if(a.second > b.second and y >= x)return false;
    return true;
}
void solve(){
    ll n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i].first;
    }
    for(int i = 0; i < n; i++){
        cin>>v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    for(auto [x,y]:v)cout<<x<<" ";
    cout<<endl;
    for(auto [x,y]:v)cout<<y<<" ";
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