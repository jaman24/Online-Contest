#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

string minWindow(string s, string t) {
    int n = s.size();
    map<int, int> mp;
    for(auto c:t){
        if(c >= 'a'){
            int k = c - 'a';
            mp[k]++;
        }
        else{
            int k = c - 'A' + 26;
            mp[k]++;
        }
    }
    map<int, int> mq;
    int l = 0, len = INT_MAX;
    int ans = -1;
    for(int r = 0; r < n; r++){
        if(s[r] >= 'a'){
            int k = s[r] - 'a';
            mq[k]++;
        }
        else{
            int k = s[r] - 'A' + 26;
            mq[k]++;
        }
        bool f = false;
        for(auto [x,y]:mp){
            if(mq[x] < mp[x]){
                f = true;
                break;
            }
        }
        if(f)continue;
        while(true){
            if(s[l] >= 'a'){
                int k = s[l] - 'a';
                mq[k]--;
                if(mq[k] < mp[k])break;
            }
            else{
                int k = s[l] - 'A' + 26;
                mq[k]--;
                if(mq[k] < mp[k])break;
            }
            l++;
        }
        ll ln = r - l + 1;
        if(ln < len){
            len = ln;
            ans = l;
        }
    }
    if(ans == -1)return "";
    return s.substr(l,len);
}
void solve(){
    string s, t;
    cin>>s>>t;
    cout<<minWindow(s, t)<<endl;
    // cout<<s.size()<<" "<<t.size()<<endl;
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