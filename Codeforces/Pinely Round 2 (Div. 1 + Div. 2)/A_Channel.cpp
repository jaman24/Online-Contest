#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n,a,q;
    cin>>n>>a>>q;
    string s;
    cin>>s;
    if(a>=n){
        cout<<"YES"<<endl;
        return;
    }
    ll c=0,d=a;
    for(auto k:s){
        if(k=='-'){
            a--;
        }
        else {
            a++;
            c++;
        }
        if(a>=n){
            cout<<"YES"<<endl;
            return;
        }
    }
    if(d+c>=n){
        cout<<"MAYBE"<<endl;
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