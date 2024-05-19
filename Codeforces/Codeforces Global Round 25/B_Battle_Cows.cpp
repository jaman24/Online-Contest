#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n, k;
    cin>>n>>k;
    k--;
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    int ans = 0, c = 0, id = -1;
    for(int i = 0; i < n; i++){
        if(v[i] < v[k]){
            c++;
        }
        else if(i != k){
            id = i;
            break;
        }
    }
    ans = max(ans, c);
    if(id != -1 and id < k){
         c = 0;
        for(int i = max(id-1, 0); i < k; i++){
            if(v[i] < v[k])c++;
            else if(i != id) break;
        }
        ans = max(ans, c);
    }

    cout<<ans<<endl;
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