#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n;
    string s;
    cin>>s;
    cin>>n;
    set<char> mp;
    for(auto x:s)mp.insert(x);
    if(n>s.size()){
        cout<<"impossible"<<endl;
    }
    else{
        // cout<<mp.size()<<endl;
        ll ans=n-mp.size();
        if(ans>0)
            cout<<ans<<endl;
        else cout<<0<<endl;
    }
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}