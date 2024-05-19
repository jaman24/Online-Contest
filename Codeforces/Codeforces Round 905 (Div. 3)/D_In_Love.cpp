#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    map<pair<ll,ll>,ll> mp,mq;
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        ll x,y;
        cin>>x>>y;
        if(c == '+'){
            mp[{x,y}]++;
            mq[{y,x}]++;
        }
        else{
            mp[{x,y}]--;
            if(mp[{x,y}] == 0){
                mp.erase({x,y});
            }
            mq[{y,x}]--;
            if(mq[{y,x}] == 0){
                mq.erase({y,x});
            }
        }
        if(mp.size()<2){
            cout<<"NO"<<endl;
        }
        else{
            auto i = mq.begin();
            auto j = mp.rbegin();
            if(i -> first.first < j -> first.first ){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
            
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