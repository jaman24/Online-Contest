#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    string s,ss;
    cin>>s>>ss;
    sort(s.begin(),s.end());
    sort(ss.begin(),ss.end());
    map<string, int> mp;
    mp["AB"] = 1;
    mp["BC"] = 1;
    mp["CD"] = 1;
    mp["DE"] = 1;
    mp["AE"] = 1;
    mp["AC"] = 2;
    mp["AD"] = 2;
    mp["BE"] = 2;
    mp["CE"] = 2;
    if(mp[s] == mp[ss]){
        cout<<"Yes"<<"\n";
    }
    else cout<<"No"<<"\n";
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}