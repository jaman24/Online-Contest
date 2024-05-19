#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,k;
    cin>>n>>k;
    if(n%2==0){
        if(k%4 == 0){
            cout<<n<<endl;
        }
        else if(k%4 == 1){
            cout<<n-k<<endl;
        }
        else if(k%4 == 2){
            cout<<n+1<<endl;
        }
        else{
            cout<<n+k+1<<endl;
        }
    }
    else{
        if(k%4 == 0){
            cout<<n<<endl;
        }
        else if(k%4 == 1){
            cout<<n+k<<endl;
        }
        else if(k%4 == 2){
            cout<<n-1<<endl;
        }
        else{
            cout<<n-k-1<<endl;
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