#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll p = 0, q = 0;
    for(auto x:s){
        if(x=='1')p++;
        else q++;
    }
    if(p%2 and q%2){
        cout<<"No"<<endl;
        return;
    }
    string t = s;
    for(int i = 0;i<n;i++){
        if(s[i] == '1'){
            if(i + 1 < n and s[i+1]=='1'){
                s[i] = '0';
                s[i+1] = '0';
            }
        }
    }
    bool f = true;
    for(auto x:s){
        if(x == '1'){
            f = false;
            break;
        }
    }
    if(f){
        cout<<"Yes"<<endl;
        return;
    }
    for(int i = 0;i<n;i++){
        if(t[i] == '0'){
            if(i + 1 < n and t[i+1]=='0'){
                t[i] = '1';
                t[i+1] = '1';
            }
        }
    }
    f = true;
    for(auto x:t){
        if(x == '0'){
            f = false;
            break;
        }
    }
    if(f){
        cout<<"Yes"<<endl;
        return;
    }
    cout<<"No"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}