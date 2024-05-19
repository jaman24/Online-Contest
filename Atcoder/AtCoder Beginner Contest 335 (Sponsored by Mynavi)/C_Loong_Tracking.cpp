#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n, q;
    cin>>n>>q;
    ll x = n;
    vector<pair<ll,ll>> part;
    part.push_back({0,0});
    for(ll i = 1; i <= n; i++){
        part.push_back({x,0});
        x--;
    }
    
    ll move = 0;
    while(q--){
        ll k;
        cin>>k;
        if(k == 1){
            char c;
            cin>>c;
            ll hx, hy;
            hx = part.back().first;
            hy = part.back().second;
            if(c == 'R')part.push_back({hx+1, hy});
            else if(c == 'L')part.push_back({hx-1, hy});
            else if(c == 'U')part.push_back({hx, hy+1});
            else if(c == 'D')part.push_back({hx, hy-1});
            move++;
            // for(auto [x,y]:part)cout<<"("<<x<<" , "<<y<<")"<<" ";
            // cout<<endl;
        }
        else{
            ll z;
            cin>>z;
            ll x = part.size();
            cout<<part[x-z].first<<" "<<part[x-z].second<<endl;
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
// (0,5), (0, 4), (0, 3), (0, 2),(0, 1),(1, 1)