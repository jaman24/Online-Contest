#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>
const int MAXN = 10000005;
int spf[MAXN];
void sieve()
{
    spf[1] = 1;
    for (int i = 2; i < MAXN; i++)
        spf[i] = i;

    for (int i = 4; i < MAXN; i += 2)
        spf[i] = 2;
 
    for (int i = 3; i * i < MAXN; i++) {
        // checking if i is prime
        if (spf[i] == i) {
            // marking SPF for all numbers divisible by i
            for (int j = i * i; j < MAXN; j += i)
 
                // marking spf[j] if it is not
                // previously marked
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}
vector<int> getFactorization(int x)
{
    vector<int> ret;
    ret.push_back(1);
    while (x != 1) {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}
void solve(){
// vector<int> p = getFactorization(1);
// for(auto x:p)cout<<x<<" ";
// cout<<endl;
// return;

    int x, y;
    cin>>x>>y;
    vector<int> xx, yy;
    // xx.push_back(x);
    // yy.push_back(y);
    vector<int> v, v1;

    while(x){
        v.push_back(x%10);
        x/=10;
    }
    sort(all(v));
    // for(auto x:v)cout<<x<<" ";
    do
    {
        if(v[0] != 0){
            int num = 0;
            for (auto e : v){
                num *= 10;
                num += e;
                // cout<<e;
            }
            // cout<<" ";
            xx.push_back(num);
        }
    } 
    while (next_permutation(all(v)));

    while(y){
        v1.push_back(y%10);
        y/=10;
    }
    sort(all(v1));
    do
    {
        if(v1[0] != 0){
            int num = 0;
            for (auto e : v1){
                num *= 10;
                num += e;
                // cout<<e;
            }
            // cout<<" ";
            yy.push_back(num);
        }
    } 
    while (next_permutation(all(v1)));
    
    // for(auto x:xx)cout<<x<<" ";
    // cout<<endl;
    // for(auto x:yy)cout<<x<<" ";
    // cout<<endl<<endl;

    int ans = 1;
    map<int, int> mp;

    for(auto a:xx){
        vector<int> p = getFactorization(a);
        for(auto d:p)mp[d]++;
    }
    for(auto b:yy){
        vector<int> p = getFactorization(b);
        for(auto d:p){
            if(mp.find(d) != mp.end()){
                ans = max(ans, d);
            }
        }
    }
    cout<<ans<<endl;
    
}
int main(){
    FastIO;
    sieve();
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}