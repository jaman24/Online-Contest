#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<char> ans;
    int i = n - 1;
    while( i >= 0){
        if(s[i] == 'a' or s[i] == 'e'){
            ans.push_back('.');
            ans.push_back(s[i]);
            i--;
            ans.push_back(s[i]);
            i--;
        }
        else{
            ans.push_back('.');
            ans.push_back(s[i]);
            i--;
            ans.push_back(s[i]);
            i--;
            ans.push_back(s[i]);
            i--;
        }
    }
    for(int i = ans.size()-1; i >= 1; i--)cout<<ans[i];
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