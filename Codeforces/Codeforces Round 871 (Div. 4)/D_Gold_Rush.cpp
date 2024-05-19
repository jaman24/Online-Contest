#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool pos(ll n,ll m){
    if(n == m){
        return true;
    }
    if(n<m)return false;
    if(n%3)return false;
    return pos(n/3, m) or pos((n/3)*2, m);
}
void solve(){
    ll n,m;
    cin>>n>>m;
    if(pos(n,m)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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