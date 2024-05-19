#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(auto &x:v)cin>>x;
    sort(v.begin(), v.end());
    int sum = 0;
    for(int i = 0; i < k-1; i++){
        sum += v[i];
    }
    for(int i = k-1; i < n; i++){
        if(sum > v[i]){
            cout<<"Yes"<<endl;
            return;
        }
        sum += v[i];
        sum -= v[i-k+1];
    }
    cout<<"No"<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}