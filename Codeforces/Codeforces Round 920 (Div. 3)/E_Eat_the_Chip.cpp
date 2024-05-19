#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,m, x,y,x1,y1;
    cin>>n>>m>>x>>y>>x1>>y1;
    ll dis = abs(x - x1);
    ll gap = abs(y - y1);
    if(dis%2){
        ll need = ((dis+1)/2) + 1;
        if(gap < 2){
            cout<<"Draw"<<endl;
            return;
        }
        if(y < y1){
            if(abs(m - y) < need){
                cout<<"Draw"<<endl;
                return;
            }
        }
        else if(y > y1){
            if(y < need){
                cout<<"Draw"<<endl;
                return;
            }
        }
    }
    else{
        ll need = (dis/2) + 1;
        if(y1 < y){
            if(abs(m - y1) < need){
                cout<<"Draw"<<endl;
                return;
            }
        }
        else if(y1 > y){
            if(y1 < need){
                cout<<"Draw"<<endl;
                return;
            }
        }
    }
    if(dis % 2){
        cout<<"Alice"<<endl;
    }
    else{
        cout<<"Bob"<<endl;
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