#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    int x = (n / 2) + 1;
    vector<char> v(n);
    int c = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'R'){
            v[i] = 'P';
            c++;
        }
    }
    if(c < x){
        int i = n-1;
        while(i >= 0 and c < x){
            if(s[i] == 'S'){
                v[i] = 'R';
                c++;
            }
            if(s[i] == 'P'){
                v[i] = 'S';
                c++;
            }
            i--;
        }
    }
    for(auto x:v){
        if(x != 'S' and x != 'P' and x != 'R')x = 'P';
        cout<<x;
    }
    cout<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}