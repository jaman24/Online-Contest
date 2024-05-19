#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

void solve(){
    ll n;
    cin>>n;
    char t;
    cin>>t;
    string s;
    map<char, set<string>> mp;
    for(int i = 0; i < 2*n; i++){
        cin>>s;
        mp[s[1]].insert(s);
    }
    vector<pair<string, string>> ans;
    for(auto [x,y]:mp){
        if(x != t){
            while(y.size() > 1){
                string p = *y.rbegin();
                y.erase(p);
                string q = *y.rbegin();
                y.erase(q);
                ans.push_back({q, p});
            }
            if(y.size() > 0){
                if(mp[t].size() == 0){
                    cout<<"IMPOSSIBLE"<<endl;
                    return;
                }
                else{
                    string p = *y.rbegin();
                    y.erase(p);
                    string q = *mp[t].rbegin();
                    mp[t].erase(q);
                    ans.push_back({p, q});
                }
            }
        }
    }
    for(auto [x,y]:mp){
        if(x == t){
            while(y.size() > 1){
                string p = *y.rbegin();
                y.erase(p);
                string q = *y.rbegin();
                y.erase(q);
                ans.push_back({q, p});
            }
            if(y.size() > 0){
                cout<<"IMPOSSIBLE"<<endl;
                return;
            }
        }
    }
    for(auto [x,y]:ans)cout<<x<<" "<<y<<endl;

}
int main(){
    FastIO;
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}