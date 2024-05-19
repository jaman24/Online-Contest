#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    string s;
    cin>>s;
    char c = s[0];
    int n = s[1] - '0';
    for(int i = 1;i<=8;i++){
        if(i != n){
            cout<<c<<i<<endl;
        }
    }
    for(char i = 'a';i<='h';i++){
        if(i != c){
            cout<<i<<n<<endl;
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