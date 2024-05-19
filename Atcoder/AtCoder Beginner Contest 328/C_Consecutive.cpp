#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    ll pre[n] = {0};
    ll sum[n];

    for(int i = 0;i<n-1;i++){
        if(s[i] == s[i+1])pre[i] = 1;
    }
    sum[0] = pre[0];
    for(int i = 1; i <n;i++){
        sum[i] = pre[i] + sum[i - 1];
    }
    while(q--){
        ll x,y;
        cin>>x>>y;
        y -= 2;
        x -= 2;
        if( y < 0){
            cout<<"0"<<endl;
        }
        else{
            if(x<0){
                cout<<sum[y]<<endl;
            }
            else{
                cout<<sum[y]-sum[x]<<endl;
            }
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