#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    vector<int> v;
    while(n--){
        ll c, x;
        cin>>c>>x;
        if(c == 1){
            v.push_back(x);
        }
        else{
             int i = v.size() - x;
             cout<<v[i]<<endl;
        }
    }
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}