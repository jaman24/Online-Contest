#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    bool a = false, b=false;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            if(s[i]=='1')
                a=true;
            else 
                b=true;
        }
    }
    if(a and b){
        cout<<"NO"<<endl;
        return;
    }
    if((!a and !b)){
        cout<<"YES"<<endl;
        return;
    }
    bool f=false;
    for(int i=0;i<m-1;i++){
        if(t[i]==t[i+1]){
            f=true;
        }
    }
    if(f or t[0] != t[m-1]){
        cout<<"NO"<<endl;
        return;
    }
    
    if((t[0] == '1' and b) or (t[0]=='0' and a)){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}