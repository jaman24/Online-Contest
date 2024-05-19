#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int MOD = 202206214218227;
void solve(){
    map<multiset<int>,int> mp;
    
    for(int i = 1; i < 5000; i++){
        int x = i * i;
        // cout<<x<<endl;
        multiset<int> m;
        while(x){
            int y = x%10;
            m.insert(y);
            x/=10;
        }
        mp[m]++;
    }
    for(auto [x,y]:mp){
        int c = x.size();
        if(y == 7 and c == 7){
            cout<<"seven"<<endl;
            for(auto a:x)cout<<a<<" ";
        }
        if(y == 5 and c == 5){
            cout<<"five"<<endl;
            for(auto a:x)cout<<a<<" ";
        }
        if(y == 3 and c == 3){
            cout<<"three"<<endl;
            for(auto a:x)cout<<a<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int cn = 1;
    // cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}