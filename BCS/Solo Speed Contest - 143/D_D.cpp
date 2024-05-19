#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    vector<int> v;
    int s = 0, i = 0;
    while(s < n){
        i++;
        s = (i * (i+1))/2;
    }
    int x = s - n;
    for(int j = 1; j <= i; j++){
        if(j != x){
            v.push_back(j);
        }
    }
    for(auto x:v)cout<<x<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}