#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    string s;
    cin>>s;
    int f[10] = {0};
    map<int , int> mp;
    for(int i=0;i<s.size();i++){
        int x = s[i] - '0';
        f[x]++;
    }
    vector<char> ans;
    for(int i=65;i<=90;i++){
        char c = i;
        int x = i%10;
        int y = i/10;
        if(x==y){
            if(f[x]>1){
                ans.push_back(c);
            }
        }
        else if(f[x] and f[y]){
            ans.push_back(c);
        }
    }
    for(auto x:ans)cout<<x;
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