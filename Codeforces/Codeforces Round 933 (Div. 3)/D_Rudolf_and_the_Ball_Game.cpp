#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

void solve(){
    ll n, m, x;
    cin>>n>>m>>x;
    vector<bool> now(n+1, false), pre(n+1, false);
    pre[x] = true;
    while(m--){
        ll d;
        char c;
        cin>>d>>c;
        for(int i = 1; i <= n; i++){
            if(pre[i]){
                ll l = (i + d) % n;
                if(l == 0) l = n;
                ll r = i - d;
                if(r <= 0)r = n + r;

                if(c == '?'){
                    now[l] = true;
                    now[r] = true;
                }
                else if(c == '1'){
                    now[r] = true;
                }
                else{
                    now[l] = true;
                }
            }
        }
        pre = now;
        for(int i = 1; i <= n; i++)now[i] = false;
    }
    ll ans = 0;
    for(auto x:pre)if(x)ans++;
    cout<<ans<<endl;
    for(int i = 1; i <= n; i++){
        if(pre[i])cout<<i<<" ";
    }
    cout<<endl;
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