#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin>>n;
    if(n<=4){
        cout<<0<<" "<<n<<endl;
    }
    else{
        cout<<1<<" "<<n-1<<endl;
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