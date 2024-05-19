#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n;
    cin>>n;
    int m[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>m[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        bool f = true;
        for(int j = 0; j < n; j++){
            if(m[i][j] == 0){
                f = false;
                break;
            }
        }
        if(f){
            cout<<"NO"<<endl;
            return;
        }
    }
    for(int i = 0; i < n; i++){
        bool f = true;
        for(int j = 0; j < n; j++){
            if(m[j][i] == 0){
                f = false;
                break;
            }
        }
        if(f){
            cout<<"NO"<<endl;
            return;
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