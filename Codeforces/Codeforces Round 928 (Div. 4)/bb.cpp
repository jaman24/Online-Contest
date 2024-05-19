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
        if(x >= 0)sum += x;
    }
    ll c = 0;
    int i = 0, j = n-1;
    while(i <= j and v[i] <= 0){
        i++;
    }
    while(j >= i and v[j] <= 0){
        j--;
    }
    ll ans = 0;
    for(int k = i; k < j; k++){
        if(v[k] >= 0)ans += v[k];
        if( v[k+1] < 0 and ans > 0){
            c++;
            ans = 0;
        }
    }
    cout<<sum<<" "<<c<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cn = 1, cs = 1;
    cin>>cn;
    while(cn--){
        cout<<"Case "<<cs++<<": ";
        solve();
    }
    return 0;
}