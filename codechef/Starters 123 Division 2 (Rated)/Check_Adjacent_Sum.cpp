#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

void solve(){
    ll n,q;
    cin>>n>>q;
    vector<ll> v(n);
    ll sum = 0;
    for(auto &x:v){
        cin>>x;
        sum += x;
    }
    while(q--){
        ll x;
        cin>>x;
        bool f = false;
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                ll rem = sum - v[i] - v[j];
                ll ans = rem*2;
                ans += v[i] + v[j];
                if(ans == x){
                    f = true;
                    cout<<v[i]<<" ";
                    for(int k = 0; k < n; k++){
                        if(k != i and k != j){
                            cout<<v[k]<<" ";
                        }
                    }
                    cout<<v[j]<<endl;
                }
                if(f)break;
            }
            if(f)break;
        }
        if(!f)cout<<-1<<endl;
    }
}
int main(){
    FastIO;
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}