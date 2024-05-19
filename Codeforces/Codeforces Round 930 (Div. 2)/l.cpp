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
        while(l < r){
            if(s[l] >= 'a'){
                int k = s[l] - 'a';
                if(mq[k] - 1 < mp[k])break;
                mq[k]--;
            }
            else{
                int k = s[l] - 'A' + 26;
                if(mq[k] - 1 < mp[k])break;
                mq[k]--;
            }
            l++;
        }
        int ln = r - l + 1;
        if(ln < len){
            len = ln;
            ans = l;
        }
    }
    if(ans == -1)return "";
    return s.substr(ans,len);
}
void solve(){
    string s, t;
    cin>>s>>t;
    cout<<minWindow(s, t)<<endl;
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