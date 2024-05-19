#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    vector<ll> v;
    ll c = 0;
    for(int i = 0; i<n;i++){
        ll x;
        cin>>x;
        if(x == 1)c++;
        else v.push_back(x);
    }
    sort(v.begin(),v.end());
    ll mx = v[v.size()-1] - 1;
    ll rem = n - c;
    if(c%2){
        if(rem%2){
            cout<<"-1"<<endl;
        }
        else{
            cout<<mx<<endl;
        }
    }
    else{
        if(rem%2){
            cout<<"-1"<<endl;
        }
        else{
            if(rem>1 and v[0] == v[1]){
                cout<<0<<endl;
            }
            else cout<<mx<<endl;
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