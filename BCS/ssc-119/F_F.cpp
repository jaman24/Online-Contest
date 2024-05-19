#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<vector<ll>> val(30);
    ll c=1;
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1]){
            int ind = s[i]-'a';
            val[ind].push_back(c);
            c=1;
        }
        else{
            c++;
        }
    }
    
    int ind = s[n-1]-'a';
    val[ind].push_back(c);
    for(int i=0;i<30;i++){
        sort(val[i].begin(),val[i].end(),greater<int>());
    }
    for(int i=0;i<30;i++){
        for(int j=1;j<val[i].size()+1;j++){
            val[i][j]+=val[i][j-1];
        }
    }

    // for(auto x:val){
    //     for(auto y:x)cout<<y<<" ";
    //     cout<<endl;
    // }
    // return;

    vector<ll> ans;
    ll m=0;
    for(int i=0;i<n+1;i++){
        ll mx=0;
        for(int j=0;j<30;j++){
            if(i<val[j].size())
                mx=max(mx,val[j][i]);
        }
        ans.push_back(mx);
        m=max(m,mx);
    }
    
    for(int i=0;i<n+1;i++){
        if(ans[i]==0)cout<<m<<" ";
        else cout<<ans[i]<<" ";
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