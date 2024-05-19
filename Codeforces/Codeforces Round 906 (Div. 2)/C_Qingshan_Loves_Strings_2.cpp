#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll> ans;
    bool f = true;
    while (f){
        ll len = s.size();
        // cout<<s<<endl;
        bool k = true;
        for(int i = 0;i<len;i++){
            ll l = i, r = len - 1 - i;
            if(s[l] == s[r]){
                if(s[l] == '0'){
                    ans.push_back(r+1);
                    s.insert(r+1, "01");
                }
                else{
                    ans.push_back(l);
                    s.insert(l, "01");
                }
                k=false;
                break;
            }
        }
        if(ans.size()>300){
            cout<<"-1"<<endl;
            return;
        }
        if(k){
            f=false;
        }
    }
    cout<<ans.size()<<endl;
    for(auto x:ans)cout<<x<<" ";
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