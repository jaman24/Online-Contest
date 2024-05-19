#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    ll x = 1;
    n -= 1;
    if((n-2)%3 and n-2 > 2){
        cout<<"YES"<<endl;
        cout<<x<<" "<<2<<" "<<n-2<<endl;
    }
    else if((n-4)%3 and n - 4 > 4){
        cout<<"YES"<<endl;
        cout<<x<<" "<<4<<" "<<n-4<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}