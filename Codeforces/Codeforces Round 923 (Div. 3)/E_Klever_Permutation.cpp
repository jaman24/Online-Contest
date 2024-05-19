#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n, k;
    cin>>n >> k;
    vector<int> v(n);
   
    int l = 1, r = n;
    for(int i = 0; i < k; i++){
        if(i%2==0){
            for(int j = i; j < n; j+=k){
                v[j] = r--;
            }
        }
        else{
            for(int j = i; j < n; j+=k){
                v[j] = l++;
            }
        }
    }
    for(auto x:v)cout<<x<<" ";
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