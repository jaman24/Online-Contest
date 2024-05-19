#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    ll sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%n!=0){
        cout<<"No"<<endl;
        return;
    }
    ll d=sum/n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        v[i] = a[i]-d;
    }
    for(auto x:v)cout<<x<< " ";
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