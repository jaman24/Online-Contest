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
    for(int i = 0; i < 2 * n; i++){
        for(int j = 0; j < 2*n; j++){
            if(i % 4 == 0 or i % 4 == 1){
                if(j % 4 == 0 or j % 4 == 1){
                    cout<<'#';
                }
                else cout<<'.';
            }
            else{
                if(j % 4 == 0 or j % 4 == 1){
                    cout<<'.';
                }
                else cout<<'#';
            }
        }
        cout<<endl;
    }
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