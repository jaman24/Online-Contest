#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    string s[n];
    for(int i = 0;i<n;i++){
        cin>>s[i];
    }
    ll row[n], col[n];
    for(int i = 0;i<n;i++){
        ll r = 0, c = 0;
        for(int j = 0; j<n;j++){
            if(s[i][j] == 'o')r++;
            if(s[j][i] == 'o')c++;
        }
        row[i] = r;
        col[i] = c;
    }
    ll ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0;j < n; j++){
            if(s[i][j] == 'o'){
                ans += ((row[i]-1) * (col[j]-1));
            }
        }
    }
    cout<<ans<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}