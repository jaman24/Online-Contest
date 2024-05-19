#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    string s;
    cin>>s;
    vector<ll> v;
    for(int i=11;i<100;i++){
        bool f=true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                f=false;
                break;
            }
        }
        if(f)v.push_back(i);
    }
    for(auto x:v){
        bool f=true;
        string ans=to_string(x);
        int j=0;
        for(int i=0;i<s.size();i++){
            if(j<ans.size() and s[i]==ans[j]){
                j++;
            }
        }
        if(j==ans.size()){
            cout<<ans<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}