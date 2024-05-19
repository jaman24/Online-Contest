#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

void solve(){
    ll n;
    cin>>n;
    string s[2];
    cin>>s[0]>>s[1];
    string ans = "";
    int in = -1, id = -1;
    bool f = true;
    ans += s[1][0];
    int c = 1;
    for(int i = 1; i < n; i++){
        if(s[0][i] == '0' and s[1][i-1] == '1'){
            c = 1;
            f = false;
        }
        else if(s[0][i] == '1' and s[1][i-1] == '0'){
            id = i;
            break;
        }
        else{
            c++;
        }
    }
    // cout<<id<<" "<<c<<endl;
    if(id == -1){
        cout<<s[0]<<s[1][n-1]<<endl;
        if(f)cout<<n<<endl;
        else cout<<c<<endl;
    }
    else{
        for(int i = 0; i < id; i++){
            cout<<s[0][i];
        }
        for(int i = id-1; i < n; i++){
            cout<<s[1][i];
        }
        cout<<endl;
        cout<<c<<endl;
    }

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