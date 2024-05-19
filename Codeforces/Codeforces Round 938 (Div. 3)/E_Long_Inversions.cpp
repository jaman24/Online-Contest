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
    while(s.size() and s.back() == '1')s.pop_back();
    reverse(all(s));
    while(s.size() and s.back() == '1')s.pop_back();
    reverse(all(s));
    // cout<<s<<endl;
    if(s.empty()){
        cout<<n<<endl;
        return;
    }
    int a = INT_MAX, b = INT_MAX, c = 0, d = 0;
    n = s.size();
    
    for(int i = 0; i < n; i++){
        if(s[i] == '0'){
            c++;
        }
        else if(c != 0){
            a = min(a, c);
            c = 0;
        }
        if(s[i] == '1'){
            d++;
        }
        else if(d != 0){
            b = min(b, d);
            d = 0;
        }
    }
    if(c != 0){
        a = min(a, c);
    }
    if(d != 0){
        b = min(b, d);
    }
    if(a == INT_MAX)a = 0;
    if(b == INT_MAX)b = 0;
    cout<<a+b<<endl;
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