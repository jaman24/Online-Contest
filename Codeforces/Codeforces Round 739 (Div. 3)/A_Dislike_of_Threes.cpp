#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    int i = 0;
    while(n){
        i++;
        if(i%3!=0 and i%10!=3){
            n--;
        }
    }
    cout<<i<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}