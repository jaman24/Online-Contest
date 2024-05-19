#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n, m;
    cin>>n>>m;
    if(m == 1){
        for(int i = 1; i <= n; i++){
            cout<<i<<" ";
        }
    }
    else if(m == n){
        for(int i = m; i >= 1; i--){
            cout<<i<<" ";
        }
    }
    else if(n % 2 == 0){
        if(m == n/2){
            for(int i = m; i >= 1; i--){
                cout<<i<<" ";
            }
            for(int i = n; i >= m+1; i--){
                cout<<i<<" ";
            }
        }
        else if(m == (n/2)+1){
            for(int i = m; i <= n; i++){
                cout<<i<<" ";
            }
            for(int i = 1; i <= m - 1; i++){
                cout<<i<<" ";
            }
        }
        else if(m == 2){
            int j = 1;
            int k = 2;
            for(int i = 1; i <= n/2; i++){
                cout<<k<<" "<<j<<" ";
                k+=2;
                j+=2;
            }
        }
        else if(m == n-1){
            int j = n;
            int k = m;
            for(int i = 1; i <= n/2; i++){
                cout<<k<<" "<<j<<" ";
                k-=2;
                j-=2;
            }
        }
        else cout<<"-1";
    }
    else cout<<"-1";
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