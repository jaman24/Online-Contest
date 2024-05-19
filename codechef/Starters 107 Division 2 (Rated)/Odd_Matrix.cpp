#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n][n];
    memset(a, 0, sizeof a);
    
    if(n%2==0){
        ll x = 1,y = 2;
        for(int i = 0;i < n-1;i++){
            for(int j = 0;j<n/2;j++){
                a[i][j] = x;
                x+=2;
            }
        }
        for(int i = n/2;i<n;i++){
            a[n-1][i] = x;
            x+=2;
        }
        for(int i = 0; i<n; i++){
            for(int j = 0;j<n;j++){
                if(a[i][j] == 0){
                    a[i][j] = y;
                    y+=2;
                }
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    else{
        ll x = 1,y = 2;
        for(int i = 0;i<n-1;i++){
            for(int j = 0;j<n/2;j++){
                a[i][j] = x;
                x+=2;
            }
        }
        for(int i =0;i<n;i++){
            a[n-1][i] = x;
            x+=2;
        }
        for(int i = 0; i<n; i++){
            for(int j = 0;j<n;j++){
                if(a[i][j] == 0){
                    a[i][j] = y;
                    y+=2;
                }
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;

    }
    
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}