#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

void solve(){
    ll n;
    cin>>n;
    ll last = 0;
    for(int i = 1; i <= n; i++){
        ll x;
        cin>>x;
        if(i==1){
            last = x;
        }
        else{
            if(x > last){
                last = x;
                // continue;
            }
            else{
                ll y = x;
                ll z = last + 1;
                ll d = z/y;
                if(z%y)d++;
                ll s = d*y;
                last = s;
            }
        }
    }
    cout<<last<<endl;
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