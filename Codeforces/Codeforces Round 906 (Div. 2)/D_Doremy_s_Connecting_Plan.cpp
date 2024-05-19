#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,c;
    cin>>n>>c;
    vector<ll> v(n);
    for(auto &x:v)cin>>x;
    ll sum = v[0], temp_sum = 0;
    for(int i=1;i<n;i++){
        ll need = (i+1) * c;
        temp_sum += v[i];
        if(sum + v[i] >= need){
            sum += temp_sum;
            temp_sum = 0;
            if(i == n-1){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}