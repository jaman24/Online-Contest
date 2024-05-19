#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,m;
    cin>>n>>m;
    ll sc[m];
    for(int i=0;i<m;i++)cin>>sc[i];
    string s[n];
    ll mxp = 0;
    for(int i=0;i<n;i++){
        cin>>s[i];
        ll p = 0;
        for(int j=0;j<m;j++){
            if(s[i][j]=='o')p+=sc[j];
        }
        p+=i+1;
        mxp = max(mxp,p);
    }
    // cout<<mxp<<endl;
    // cout<<n<<endl;
    for(int i=0;i<n;i++){
        vector<ll> v;
        ll cs = i+1;
        for(int j=0;j<m;j++){
            if(s[i][j] == 'x')v.push_back(sc[j]);
            else cs += sc[j];
        }
        if(cs>=mxp){
            cout<<0<<endl;
            continue;
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        // cout<<cs<<" "<<mxp<<endl;
        // for(auto x:v)cout<<x<<" ";
        // cout<<endl;
        for(int k=0;k<v.size();k++){
            cs+=v[k];
            if(cs>=mxp){
                cout<<k+1<<endl;
                break;;
            }
        }
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