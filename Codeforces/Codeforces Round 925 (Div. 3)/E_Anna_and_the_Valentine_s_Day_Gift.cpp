#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n, m;
    cin>>n>>m;
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    // if(n == 1){
    //     if(m > 12){
    //         cout<<"Anna"<<endl;
    //     }
    //     else{
    //         ll x = pow(10, m);
    //         if(v[0] > x){
    //             cout<<"Sasha"<<endl;
    //         }
    //         else{
    //             cout<<"Anna"<<endl;
    //         }
    //     }
    // }
    // else{
        vector<ll> zero;
        ll total = 0;
        for(auto x:v){
            ll p = x;
            ll c = 0;
            while(p%10 == 0){
                c++;
                p/=10;
            }
            zero.push_back(c);
            string s = to_string(x);
            total += s.size();
        }
        sort(zero.begin(), zero.end());
        ll de = 0;
        for(int i = zero.size()-1; i >= 0; i-=2){
            de += zero[i];
        }
        total -= de;
        // cout<<total<<" "<<m<<endl;
        if(total <= m){
            cout<<"Anna"<<endl;
        }
        else{
            cout<<"Sasha"<<endl;
        }
    // }
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}