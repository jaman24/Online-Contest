#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n,m;
    cin>>n>>m;
    if(m==1){
        cout<<0<<endl;
        for(int i=0;i<n;i++){
            cout<<0<<endl;
        }
        return;
    }
    if(n==1){
        cout<<2<<endl;
        for(int i=0;i<m;i++)cout<<i<<" ";
        cout<<endl;
        return;
    }
    if(n>=m){
        cout<<m<<endl;
        for(int i=0;i<m-1;i++){
            for(int j=m-i;j<m;j++){
                cout<<j<<" ";
            }
            for(int j=0;j<m-i;j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        for(int i=m-1;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<j<< " ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<n+1<<endl;
        for(int i=0;i<n;i++){
            for(int j=m-i;j<m;j++){
                cout<<j<<" ";
            }
            for(int j=0;j<m-i;j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }
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