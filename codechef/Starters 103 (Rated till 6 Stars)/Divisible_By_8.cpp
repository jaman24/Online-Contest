#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
ll s_mod_8(string& s){
    int id = 0, div = 0,rem = 0;
    while(id<s.size()){
        int d = s[id]-'0';
        div = (div*10)+d;
        div = div%8;
        id++;
    }
    return div;
}
void solve(){
    ll n;
    cin>>n;
    string num;
    cin>>num;
    ll x = s_mod_8(num);
    if(x == 0){
        cout<<num<<endl;
    }
    else{
        for(int i=0;i<n-1;i++)cout<<num[i];
        int last = num[n-1] - '0';
        if(last+(8-x)>9){
            cout<<last-x<<endl;
        }
        else{
            cout<<last+(8-x)<<endl;
        }
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