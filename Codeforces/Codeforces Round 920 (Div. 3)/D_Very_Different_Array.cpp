#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,m;
    cin>>n>>m;
    ll a[n], b[m];
    for(auto &x:a)cin>>x;
    for(auto &x:b)cin>>x;
    sort(a, a+n);
    sort(b, b+m);
    int i = 0, j = m-1;
    ll ans = 0;
    ll k = 0, l = n-1;
    while(k <= l){
        ll x = abs(a[k] - b[i]);
        ll y = abs(a[k] - b[j]);
        ll x1 = abs(a[l] - b[i]);
        ll y1 = abs(a[l] - b[j]);
        if(x >= max(y, max(x1, y1))){
            ans += x;
            i++;
            k++;
        }
        else if(y >= max(x, max(x1, y1))){
            ans += y;
            j--;
            k++;
        }
        else if(x1 >= max(y1, max(x, y))){
            ans += x1;
            i++;
            l--;
        }
        else if(y1 >= max(x1, max(x, y))){
            ans += y1;
            j--;
            l--;
        }

    }
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