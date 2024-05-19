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
    string s;
    cin>>s;
    string ss = s;
    reverse(ss.begin(), ss.end());
    for(int i = 0; i < ss.size(); i++){
        if(s[i] > ss[i]){
            cout<<ss<<s<<endl;
            return;
        }
        else if(s[i] < ss[i]){
            cout<<s<<endl;
            return;
        }
    }
    cout<<s<<endl;
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