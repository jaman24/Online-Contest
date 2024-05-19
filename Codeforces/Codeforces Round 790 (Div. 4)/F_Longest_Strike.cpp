#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,k;
    cin>>n>>k;
    map<ll,ll> mp;
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        mp[x]++;
    }
    ll id = 0, l = 0, r = 0, d = 0, p = 0 , q = 0;
    bool set = true;

    for(auto [x,y]:mp){
        if(set){
            if(id == x and y >= k){
                id++;
            }
            else{
                q = id - 1;
                ll dis = q - p;
                if(dis >= d){
                    d = dis;
                    l = p;
                    r = q;
                }
                set = false;
            }
        }
        if(set == false and y >= k){
            id = x + 1;
            p = x;
            set = true;
        }
    }
    if(set){
        q = id - 1;
        ll dis = q - p;
        if(dis >= d){
            l = p;
            r = q;
        }
    }
    if(l == 0){
        cout<<"-1"<<endl;
    }
    else
    cout<<l<<" "<<r<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}