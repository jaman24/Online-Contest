#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n,c,d;
    cin>>n>>c>>d;
    vector<int> v(n*n);
    for(auto &x:v){
        cin>>x;
    }
    sort(all(v));
    int a[n][n];
    a[0][0] = v[0];
    vector<int> vv;
    for(int i = 1; i < n; i++){
        a[0][i] = a[0][i-1] + d;
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n; j++){
            a[i][j] = a[i-1][j] + c;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            vv.push_back(a[i][j]);
        }
    }
    sort(all(vv));
    if(v == vv){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

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