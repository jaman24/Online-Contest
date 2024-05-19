#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n),b(m),c(n+m);
    for(auto &x:a)cin>>x;
    for(auto &x:b)cin>>x;
    sort(b.begin(),b.end());
    reverse(b.begin(),b.end());
    int id = 0, i = 0, j = 0;
    while(i < n or j < m){
        if(i < n and j < m){
            if(a[i] < b[j]){
                c[id++] = b[j];
                j++;
            }
            else{
                c[id++] = a[i];
                i++;
            }
        }
        else if(i < n){
            c[id++] = a[i];
            i++;
        }
        else{
            c[id++] = b[j];
            j++;
        }
    }
    for(auto x:c)cout<<x<<" ";
    cout<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}