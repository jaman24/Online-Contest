#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    if(n == 1){
        cout<<1<<endl;
    }
    else if(n<=3){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        ll x = 1, y = (n)/2 + 1;
        while (x <= (n)/2)
        {
            cout<<y<<" "<<x<<" ";
            x++;
            y++;
        }
        if(y <= n)cout<<y;
        cout<<endl;
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