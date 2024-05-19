#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int ans = 1;
    for (auto [x,y] : mp)
    {
        ans = (ans * (y + 1LL))%MOD;
    }
    cout << ans - 1 << endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}