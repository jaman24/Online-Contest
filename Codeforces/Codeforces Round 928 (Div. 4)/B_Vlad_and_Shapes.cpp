#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    string s[n];
    for(auto &x:s)cin>>x;
    set<int> st;
    for(int i = 0; i < n; i++){
        int c = 0;
        for(auto x:s[i]){
            if(x == '1')c++;
        }
        if(c)st.insert(c);
    }
    if(st.size()==1){
        cout<<"SQUARE"<<endl;
    }
    else{
        cout<<"TRIANGLE"<<endl;
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