#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    string s;
    getline(cin, s);
    // cout<<s<<endl;
    map<ll,ll> mp;
    for(auto c:s){
        if((c>='a' and c<='z') or (c>='A' and c<='Z')){
            mp[c-'a']++;
            mp[c-'A']++;
        }
    }
    string ans;
    for(int i = 0;i<26;i++){
        if(mp.find(i) == mp.end()){
            ans += (char)(i + 'a');
        }
    }
    if(ans.size()){
        cout<<"missing "<<ans<<"\n";
    }
    else{
        cout<<"pangram"<<"\n";
    }

}
int main(){
    int cn = 1;
    cin>>cn;
    getchar();
    while(cn--){
        solve();
    }
    return 0;
}