#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    if(n%2==0)return;
    cout<<n<<"-> ";
    // for(int i = 1; i <= n; i++)cout<<i<<endl;
    vector<pair<int, pair<int, int>>> pos;
    for(int i = 1; i < n; i++){
        for(int j = i; j < n; j++){
            int x = __gcd(i, j);
            int y = (i * j)/x;
            if(x+y == n){
                pos.push_back({j-i,{i, j}});
            }
        }
    }
    sort(pos.begin(), pos.end());
    if(pos.empty()){
        cout<<"-1"<<endl;
    }
    else{
        int x = 0;
        cout<<pos[x].second.first<<" "<<pos[x].second.second<<endl;
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
/*
1, 1
1, 2
1, 3
3, 3
3, 4
4, 4

*/