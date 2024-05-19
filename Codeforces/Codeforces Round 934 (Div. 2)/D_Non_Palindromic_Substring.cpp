#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 1e9 + 7;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>
const ll base = 257;
vector<ll> power;
vector<ll> hasing(string &s){
    vector<ll> has(s.size());
    has[0]=s[0];
    power.resize(s.size());
    power[0]=1;
    for(int i=1;i<s.size();i++){
        has[i]=(has[i-1]*base)+s[i];
        if(has[i]>=MOD)has[i]%=MOD;
        power[i]=power[i-1]*base;
        if(power[i]>=MOD)power[i]%=MOD;
    }
    return has;
}

ll rangehash(vector<ll> &hash , ll l , ll r){
    if(l == 0){
        return hash[r];
    }
    ll h1=hash[r];
    ll h2=hash[l-1]*power[r-l+1];
    if(h2>=MOD)h2%=MOD;
    return (h1-h2 + MOD)%MOD;
}

vector<vector<int>> v(26);
void build_position_vector(string &s)
{
    for (int i = 0; i < s.size(); i++) {
        v[s[i] - 'a'].push_back(i);
    }
}
 
int findCount(int L, int R)
{
    int distinct = 0;
    for (int i = 0; i < 26; i++) {
        auto first = lower_bound(v[i].begin(), v[i].end(), L);
 
        if(first != v[i].end() && *first <= R) {
            distinct++;
        }
    }
    return distinct;
}
void solve(){
    ll n, q;
    cin >> n >> q;
    string s;
    cin>>s;

    string rs=s;
    reverse(rs.begin(),rs.end());

    vector<ll> hash,rhash;
    hash = hasing(s);
    rhash = hasing(rs);

    build_position_vector(s);

    while(q--){
        ll l, r;
        cin>>l>>r;
        l--;
        r--;
        ll len = r-l+1;
        ll h1=rangehash(hash , l , r);
        ll h2=rangehash(rhash ,n-r-1, n-r-1+len-1);
        // cout<<l<<" "<<r<<endl;
        // cout<<n-r-1<<" "<<n-r-1+len-1<<endl;

        if(h1==h2){
            ll ans = (len * (len + 1))/2;
            int x = findCount(l, r);
            if(x > 1){
                cout<<ans-1-len<<endl;
            }
            else cout<<0<<endl;
        }
        else{
            ll ans = (len * (len + 1))/2;
            cout<<ans-1<<endl;
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