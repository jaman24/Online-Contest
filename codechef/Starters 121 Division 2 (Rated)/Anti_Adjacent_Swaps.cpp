#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    vector<int> v(n);
    for(auto &x:v)cin>>x;
    if(n >= 4 or n == 1){
        cout<<"YES"<<endl;
    }
    else if( n == 2 and v[0] <= v[1]){
        cout<<"YES"<<endl;
    }
    else if(n == 3){
        int x = v[1];
        sort(v.begin(), v.end());
        if(x == v[1])
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}