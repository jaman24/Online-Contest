#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    char c[30];
    char d = 'a';
    for(int i = 1; i<=26; i++){
        c[i] = d;
        d++;
    }
    if(n > 52){
        int x = n - 52;
        n -= x;
        cout<<c[x]<<c[26]<<c[26]<<endl;
    }
    else{
        cout<<c[1];
        n -= 1;
        if(n > 26){
            int x = n - 26;
            n -= x;
            cout<<c[x]<<c[26]<<endl;
        }
        else{
            cout<<c[1];
            n -= 1;
            cout<<c[n]<<endl;
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