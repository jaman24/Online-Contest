#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>
bool val(int i, int j, int n, int m, vector<string>& s){
    if(i >= 0 and j >= 0 and i < n and j < m and s[i][j] != '#')return true;
    return false;
}
void solve(){
    ll n, m;
    cin>>n>>m;
    vector<string> s(n);
    for(auto &x:s){
        cin>>x;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(s[i][j] != '#'){
                bool f = false;
                if(val(i-1, j-1, n, m, s) and val(i-1, j, n, m, s) and val(i, j-1, n, m, s)){
                    f = true;
                }
                if(val(i-1, j, n, m, s) and val(i-1, j+1, n, m, s) and val(i, j+1, n, m, s)){
                    f = true;
                }
                if(val(i, j+1, n, m, s) and val(i+1, j+1, n, m, s) and val(i+1, j, n, m, s)){
                    f = true;
                }
                if(val(i+1, j, n, m, s) and val(i+1, j-1, n, m, s) and val(i, j-1, n, m, s)){
                    f = true;
                }
                if(f == false){
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"YES"<<endl;
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