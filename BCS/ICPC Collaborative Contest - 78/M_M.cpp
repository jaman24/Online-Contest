#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    int n,q;
    cin>>n>>q;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        v[i].first = 0, v[i].second = 0;
    }
    set<int> team;
    while(q--){
        int x, y;
        cin>>x>>y;
        x--;
        v[x].first += 1;
        v[x].second += y;
        if(x == 0){
            vector<int> d;
            for(auto t:team){
                if(v[t].first < v[x].first or (v[t].first == v[x].first and v[t].second >= v[x].second)){
                    d.push_back(t);
                }
            }
            for(auto t:d){
                team.erase(t);
            }
        }
        else{
            if(v[x].first > v[0].first or (v[x].first == v[0].first and v[x].second < v[0].second)){
                team.insert(x);
            }
        }
        cout<<team.size()+1<<endl;
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