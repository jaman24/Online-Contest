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
    vector<int> v(n);
    map<int,int> mp;
    for(auto &x:v){
        cin>>x;
        mp[x]++;
    }
    ll e = 0;
    for(auto [x, y]:mp){
        if(x != e){
            break;
        }
        if(y < 2){
            cout<<-1<<endl;
            return;
        }
        e++;
    }
    set<int> s;
    int k = 0, a = 1, b = 0, c = 0, d = n;
    for(int i = 0; i < n; i++){
        s.insert(v[i]);
        while(s.find(k) != s.end()){
            k++;
        }
        if(k == e){
            b = i+1;
            break;
        }
    }
    int kk = 0;
    c = b + 1;
    s.clear();
    for(int i = b; i < n; i++){
        s.insert(v[i]);
        while(s.find(kk) != s.end()){
            kk++;
        }
        if(kk == e){
            break;
        }
    }
    if(k == e and kk == e and c != 1 and b != 0){
        cout<<2<<endl<<a<<" "<<b<<endl<<c<<" "<<d<<endl;
    }
    else cout<<-1<<endl;
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