#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

void solve(){
    ll n;
    string s;
    cin>>s;
    n = s.size();
    int v[n][n];
    memset(v, 0, sizeof  v);

    for(int i = 0; i < n; i++){
        int k = 0;
        for(int j = i; j < n; j++){
            if(s[i] == s[j] or s[i] == '?' or s[j] == '?'){
                v[i][k] = 1;
            }
            else{
                v[i][k] = 0;
            }
            k++;
        }
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n; j++){
            v[i][j] += v[i-1][j];
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            int l = j;
            if(i + l-1 < n){
                int sum = v[i+l-1][j];
                if(i > 0)sum -= v[i-1][j];
                if(sum == j){
                    ans = max(ans, (j)*2);
                }
            }
        }
    }
    cout<<ans<<endl;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++)cout<<v[i][j]<<" ";
    //     cout<<endl;
    // }
    // cout<<endl;
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