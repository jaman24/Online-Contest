#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    if(b<a)swap(a,b);
    ll d = b - a - 1;
    if(a-1 > d){
        cout<<"-1"<<endl;
        return;
    }
    ll mx = b + d - (a - 1);
    if(c>mx){
        cout<<"-1"<<endl;
        return;
    }
    if(c <= mx/2){
        cout<<(mx/2) + c<<endl;
    }
    else{
        cout<<(c - (mx/2))<<endl;
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