#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,k;
    cin>>n>>k;
    int od = 1, ev = 2;
    if(k%2){
        for(int i = 0; i < k/2; i++){
            cout<<ev<<" "<<od<<" ";
            ev += 2;
            od += 2;
        }
        for(int i = ev; i <= n; i+= 2){
            cout<<i<<" ";
        }
        for(int i = od; i <= n; i += 2){
            cout<<i<<" ";
        }
    }
    else{
        for(int i = 0; i < k/2; i++){
            cout<<od<<" "<<ev<<" ";
            od += 2;
            ev += 2;
        }
        for(int i = ev; i <= n; i+= 2){
            cout<<i<<" ";
        }
        for(int i = od; i <= n; i += 2){
            cout<<i<<" ";
        }
    }
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