#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define int long long
#define MOD 1000000007
int pow(int a, int b, int m){
    int out = 1;
    while(b--){
        out = (out*a)%m;
    }
    return out;
}
int mod(int a){
    return (a%MOD+MOD)%MOD;
}
void solve(){
    int n,m;
    cin >> n >> m;
    int a[n],b[m];
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<m; i++) cin >> b[i];
    int i=0,j=0,ans=0,ta,tb;
    while (i!=n && j!=m){
        ta=0,tb=0;
        if (a[i]>b[j]){
            j++;
        } else if(a[i]<b[j]) {
            i++;
        } else {
            while (a[i]==b[j]){
                j++;
                tb++;
            }
            j--;
            while (a[i]==b[j]){
                i++;
                ta++;
            }
            ans+=ta*tb;
        }
    }
    cout << ans;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1; //cin>>t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}