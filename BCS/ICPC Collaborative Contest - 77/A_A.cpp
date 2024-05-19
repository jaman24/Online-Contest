#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    string s;
    cin>>s;
    bool f= false;
    for(auto x:s){
        if(x == 'a'){
            f = true;
        }
        if(f){
            printf("%c",x);
        }
    }
    cout<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}