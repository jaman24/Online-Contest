#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 1e9 + 7;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>
const int BASE = 257;
const int M = 1000000;
long long sH[M + 5],expo[M + 5];
inline long long add(long long a, long long b)
{
  if (a >= MOD) a %= MOD;
  if (b >= MOD) b %= MOD;
  long long c = a + b;
  if (c >= MOD) c %= MOD;
  return c;
}
inline long long multiply(long long a, long long b)
{
  if (a >= MOD) a %= MOD;
  if (b >= MOD) b %= MOD;
  long long c = ((__int128)a * b);
  if (c >= MOD) c %= MOD;
  return c;
}
void precalculate(string &s)
{
  int len = s.size();
  // calculate expos
  expo[0] = 1;
  for(int i = 1; i < len; i++)
  {
    expo[i] = multiply(expo[i - 1], BASE);
  }
  // calculate prefix hashes
  sH[0] = s[0];
  for (int i = 1; i < len; i++)
  {
    sH[i] = add(multiply(sH[i - 1], BASE), s[i]);
  }
}
ll rangehash(ll l , ll r){
    if(l == 0){
        return sH[r];
    }
    auto h1=sH[r];
    auto h2=sH[l-1]*expo[r-l+1];
    if(h2>=MOD)h2%=MOD;
    return (h1-h2 + MOD)%MOD;
}

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    precalculate(s);
    vector<int> div;
    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            div.push_back(i);
        }
    }
    for(auto x:div){
        map<ll, ll> mp;
        for(int i = 0; i < n - x + 1; i+=x){
            ll h = rangehash(i, i+x-1);
            mp[h]++;
            if(mp.size() > 2){
                break;
            }
        }
        if(mp.size() == 1){
            cout<<x<<endl;
            return;
        }
        if((mp.size() > 2))continue;
        ll p, q, c = 0;
        for(auto [x,y]:mp){
            if(c == 0){
                p = x;
                c = 1;
            }
            else{
                q = x;
            }
        }
        if(mp[p] == 1){
            swap(p, q);
        }
        else if(mp[q] == 1){
            
        }
        else continue;
        ll l = -1, r = -1;
        for(int i = 0; i < n - x + 1; i+=x){
            ll h = rangehash(i, i+x-1);
            if(h == p){
                l = i;
            }
            else{
                r = i;
            }
            if(l != -1 and r != -1)break;
        }
        c = 0;
        for(int i = 0; i < x; i++){
            if(s[l+i] != s[r+i])c++;
            if(c > 1)break;
        }
        if(c <= 1){
            cout<<x<<endl;
            return;
        }
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