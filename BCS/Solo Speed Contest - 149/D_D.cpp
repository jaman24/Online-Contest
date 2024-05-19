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
    vector<int> v;
    int rev = 0;
    for(int i = n-1; i >= 0; i--){
        if(rev % 2 == 0){
            if(s[i] == '0'){
                v.pb(i);
                rev++;
            }
        }
        else{
            if(s[i] == '1'){
                v.pb(i);
                rev++;
            }
        }
    }
    cout<<v.size()<<endl;
    for(auto x:v){
        cout<<1<<" "<<x+1<<endl;
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