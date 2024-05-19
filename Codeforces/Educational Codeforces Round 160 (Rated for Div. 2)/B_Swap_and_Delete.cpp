#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    string s;
    cin>>s;
    n = s.size();
    int on = 0, ze = 0;
    for(auto x:s){
        if(x == '1')on++;
        else ze++;
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            if(ze > 0){
                ze--;
                ans++;
            }
            else break;
        }
        if(s[i] == '0'){
            if(on > 0){
                on--;
                ans++;
            }
            else break;
        }
    }
    cout<<n - ans<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}