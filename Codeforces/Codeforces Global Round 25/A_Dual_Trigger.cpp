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
    string s;
    cin>>s;
    ll c = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '1')c++;
    }
    if(c%2 == 0 and c != 2 ){
        cout<<"YES"<<endl;
    }
    else if(c == 2){
        for(int i = 0; i < n-1; i++){
            if(s[i] == s[i+1] and s[i] == '1'){
                cout<<"NO"<<endl;
                return;
            }
        }
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