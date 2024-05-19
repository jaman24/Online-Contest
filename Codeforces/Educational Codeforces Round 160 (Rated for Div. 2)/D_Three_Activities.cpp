#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    vector<pair<int,int>> va(n),vb(n),vc(n);
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        va[i] = {x, i};
    }
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        vb[i] = {x, i};
    }
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        vc[i] = {x, i};
    }
    sort(va.begin(), va.end());
    sort(vb.begin(), vb.end());
    sort(vc.begin(), vc.end());
    reverse(va.begin(), va.end());
    reverse(vb.begin(), vb.end());
    reverse(vc.begin(), vc.end());
    ll ans = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                if(va[i].second != vb[j].second and va[i].second != vc[k].second and vb[j].second != vc[k].second){
                    ll res = va[i].first + vb[j].first + vc[k].first;
                    ans = max(ans, res);
                }
            }
        }
    }
    cout<<ans<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}