#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll sum = 0;
    for(auto &x:v){
        cin>>x;
        sum += x;
    }
    ll av = sum/n, need = 0;
    // cout<<av<<endl;
    for(int i = n - 1; i >= 0; i--){
        if(v[i] > av){
            if(v[i] - av > need){
                cout<<"NO"<<endl;
                return;
            }
            need -= (v[i] - av);
        }
        else need += (av - v[i]);
    }
    cout<<"YES"<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}