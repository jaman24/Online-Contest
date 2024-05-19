#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>
bool pos(int m, map<int, int>& mp){
    vector<int> v;
    for(int i = 0; i < m; i++){
        if(mp.find(i) == mp.end())return false;
        v.pb(mp[i]);
    }
    sort(all(v));

    for(int i = 1; i < m; i++){
        if(v[i] < 2){
            return false;
        }
    }
    // cout<<m<<" "<<c<<endl;
    return true;
}
void solve(){
    int n;
    cin>>n;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    int l = 0, r = n;
    while(l < r){
        int mid = (l+r+1)/2;
        if(pos(mid, mp)){
            l = mid;
        }
        else{
            r = mid - 1;
        }
    }
    cout<<l<<endl;
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