#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 1e9 + 7;
ll inv(ll a, ll m) {
  return a <= 1 ? a : m - (long long)(m/a) * inv(m % a, m) % m;
}
void solve(){
    ll n, m;
    cin>>n>>m;
    string s[n];
    for(auto &x:s)cin>>x;
    if(n == 1){
        cout<<1<<endl;
        return;
    }
    for(int i = n-1; i > 1; i--){
        ll cnt = 0, c = 0, d = 0;
        for(int j = 0; j < m; j++){
            if(s[i][j] == '1' and s[i-1][j] == '1')cnt++;
            if(s[i-1][j] == '1')c++;
            if(s[i][j] == '1')d++;
            if(cnt >= 1)break;
        }
        if(cnt >= 1 and c >= 2 and d >= 2){
            for(int j = 0; j < m; j++){
                if(s[i][j] == '1')s[i-1][j] = '1';
            }
        }
    }

    ll c = 0, on = 0, ze = 0;
    for(int i = 0; i < m; i++){
        if(s[1][i] == '1'){
            c++;
            if(s[0][i] == '0')ze++;
            else on++;
        }
    }
    cout<<on<<" "<<ze<<endl;

    // if(c == 1){
    //     cout<<1<<endl;
    //     return;
    // }
    ll ans = 1;
    for(int i = 1; i <= c; i++){
        ans *= i;
        ans %= MOD;
    }

    ll t = 1;
    for(int i = 1; i <= on; i++){
        t *= i;
        t %= MOD;
    }
    t = inv(t, MOD);
    ans *= t;
    ans %= MOD;

    ll tt = 1;
    for(int i = 1; i <= ze; i++){
        tt *= i;
        tt %= MOD;
    }
    tt = inv(tt, MOD);
    
    ans *= tt;
    ans %= MOD;
    cout<<ans<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}