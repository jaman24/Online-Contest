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
    vector<ll> v(n), pre(n), post(n);
    for(auto &x:v)cin>>x;
    pre[0] = v[0];
    post[n-1] = v[n-1];
    for(int i = 1; i < n; i++)pre[i] = __gcd(pre[i-1], v[i]);
    for(int i = n-2; i >= 0; i--)post[i] = __gcd(post[i+1], v[i]);
    if(post[0] > 1){
        cout<<n<<endl;
        return;
    }
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(i == 0){
            if(post[i+1] != post[i])ans++;
        }
        else if(i == n-1){
            if(pre[i-1] != pre[i])ans++;
        }
        else{
            if(post[0] != __gcd(pre[i-1], post[i+1]))ans++;
        }
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