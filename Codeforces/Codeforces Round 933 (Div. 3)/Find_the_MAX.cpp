#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define PII pair<int, int>
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
class Compare {
public:
    bool operator()(PII below, PII above)
    {
        if (below.second < above.second) {
            return true;
        }
        else if (below.second == above.second && below.first < above.first) {
            return true;
        }
        return false;
    }
};
void solve(){
    ll n;
    cin>>n;
    map<int, int> mp;
    priority_queue<PII, vector<PII>, Compare> ds;
    while(n--){
        int x;
        cin>>x;
        if(x == 1){
            int num;
            cin>>num;
            mp[num]++;
            ds.push({num, mp[num]});
        }
        else{
            if(mp.empty()){
                cout<<"empty"<<endl;
            }
            else{
                while(mp.find(ds.top().first) == mp.end() or ds.top().second != mp[ds.top().first]){
                    ds.pop();
                }
                cout<<ds.top().first<<endl;
                mp.erase(ds.top().first);
                ds.pop();
            }
        }
    }
}
int main(){
    FastIO;
    int cn = 1;
    // cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}
