#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 998244353;
int pr[1001][1001];
bool vis[1001][1001];
const int dx[] = { 0, 1, -1, 0 };
const int dy[] = { 1, 0, 0, -1 };
ll n, m;
string s[1001];
bool check(int x, int y){
    return x>=0 and x<n and y>=0 and y<m;
}
void dfs(int i, int j, int c){
    vis[i][j] = true;
    pr[i][j] = c;
    for(int k = 0; k < 4; k++){
        int p = i + dx[k];
        int q = j + dy[k];
        if(check(p, q) and !vis[p][q] and s[p][q] == '#'){
            dfs(p,q,c);
        }
    }
}
ll inv(ll a, ll m) {
  return a <= 1 ? a : m - (long long)(m/a) * inv(m % a, m) % m;
}
void solve(){
    cin>>n>>m;
    for(int i = 0; i < n; i++)cin>>s[i];
    memset(pr, 0, sizeof pr);
    memset(vis, false, sizeof vis);
    int p = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!vis[i][j] and s[i][j] == '#'){
                dfs(i, j, p);
                p++;
            }
        }
    }
    ll t = 0, z = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(s[i][j] == '.'){
                z++;
                set<ll> st;
                for(int k = 0; k < 4; k++){
                    int p = i + dx[k];
                    int q = j + dy[k];
                    if(check(p, q) and s[p][q] == '#'){
                        st.insert(pr[p][q]);
                    }
                }
                if(st.size()){
                    t += p - (st.size() - 1);
                }
                else{
                    t += p + 1;
                }
            }
        }
    }
    t %= MOD;
    ll x =  inv(z, MOD);
    ll ans = (t * x)%MOD;
    cout<<ans<<endl;

}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}