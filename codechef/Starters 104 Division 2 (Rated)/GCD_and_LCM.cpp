#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    int x,y,k;
    cin>>x>>y>>k;
    while(k--){
        if(x==y){
            cout<<x+y<<endl;
            return;
        }
        int gc = __gcd(x,y);
        if(x>y){
            x=gc;
        }
        else{
            y = gc;
        }
    }
    cout<<x+y<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}