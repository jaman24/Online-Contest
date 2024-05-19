#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    string s, t;
    cin>>s>>t;
    int c = INT_MAX;
    int n = s.size(), m = t.size();
    for(int i = 0; i <= n - m; i++){
        int k = 0;
        for(int j = 0; j < m; j++){
            if(s[i+j] == t[j])k++;
        }
        c = min(c, m - k);
    }
    cout<<c<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}