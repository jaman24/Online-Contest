#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    string s = "";
    int sz = 0;
    while(true){
        // L, R, U, D
        ll l, r, u, d;
        cout<<1<<" "<<"L"<<endl;
        cin>>l;
        if(l == 0)break;
        cout<<1<<" "<<"R"<<endl;
        cin>>r;
        if(r == 0)break;
        cout<<1<<" "<<"U"<<endl;
        cin>>u;
        if(u == 0)break;
        cout<<1<<" "<<"D"<<endl;
        cin>>d;
        if(d == 0)break;
        if(l <= r and l <= u and l <= d){
            s += "L";
        }
        else if(r <= l and r <= u and r <= d){
            s += "R";
        }
        else if(u <= l and u <= r and u <= d){
            s == "U";
        }
        else{
            s += "D";
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