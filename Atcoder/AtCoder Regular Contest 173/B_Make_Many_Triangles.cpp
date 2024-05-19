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
    map<int, int> mx, my;
    for(int i = 0; i < n; i++){
        int x, y;
        cin>>x>>y;
        mx[x]++;
        my[y]++;
    }
    int ans = 0, res = 0;
    multiset<int> s;
    for(auto [x,y]:mx){
        s.insert(y);
    }
    while(s.size() > 1){
        int a = *s.begin();
        int b = *s.rbegin();
        if(b < 2)break;
        ans++;
        auto it  = s.begin();
        auto it1 = prev(s.end());

        s.erase(it);
        s.erase(it1);
        if(a > 1)s.insert(a-1);
        if(b > 2)s.insert(b-2);
    }
    multiset<int> ss;
    for(auto [x,y]:my){
        ss.insert(y);
    }
    while(ss.size() > 1){
        int a = *ss.begin();
        int b = *ss.rbegin();
        if(b < 2)break;
        res++;
        auto it  = ss.begin();
        auto it1 = prev(ss.end());

        ss.erase(it);
        ss.erase(it1);
        if(a > 1)ss.insert(a-1);
        if(b > 2)ss.insert(b-2);
    }

    cout<<max(ans, res)<<endl;
}
int main(){
    FastIO;
    int cn = 1;
    // cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}