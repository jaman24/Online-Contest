#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll a,m,l,r;
    cin>>a>>m>>l>>r;
    if(a >= l and a <= r){
        ll dis = abs(a - l);
        ll dis1 = abs(r - a);
        cout<<(dis1/m) + (dis/m) + 1<<endl;
    }
    else if(a < l){
        ll dis1 = abs(a - r);
        ll dis2 = abs(a - l);
        dis2--;
        cout<<(dis1/m) - (dis2/m)<<endl;
    }
    else{
        ll dis1 = abs(a - r);
        ll dis2 = abs(a - l);
        dis1--;
        cout<<(dis2/m) - (dis1/m)<<endl;
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