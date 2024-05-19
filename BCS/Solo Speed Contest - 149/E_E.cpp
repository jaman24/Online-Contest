#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    int n;
    cin >>n;
    int ar[n], same, ans[n], x=0;
    map<int, vector<int> > mpVector;
    for (int i = 0; i < n; ++i) {
        cin>>ar[i];
        same = n - ar[i];
        mpVector[same].push_back(i);
    }
    int f=1;
    for (auto u: mpVector) {
        auto v=u.second;
        if(v.size()%u.first!=0){
            f=0;
            break;
        }
        for(int i=0; i<v.size(); i++){
            if(i%u.first==0){
                x++;
            }
            ans[v[i]]=x;
        }
    }
    if(!f) cout<<"Impossible"<<endl;
    else {
        cout<<"Possible"<<endl;
        for (int i = 0; i < n; ++i) {
            cout<<ans[i]<<" ";
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