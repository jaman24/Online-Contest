#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    map<ll,ll> mp;
    for(auto &x:a){
        cin>>x;
        mp[x]++;
    }
    ll c = 0;
    for(auto [x,y]:mp){
        if(y>1){
            c++;
        }
    }
    
    if(c<2){
        cout<<"-1"<<endl;
        return;
    }
    bool f = false;
    ll b[1000];
    int flag = 1;
    set<ll> s;
    for(int i = 0; i<n ;i++){
        if(s.find(a[i]) == s.end() and mp[a[i]]>1){
            s.insert(a[i]);
            if(f){
                b[a[i]] = 1;
                f = false;
            }
            else{
                b[a[i]] = 1;
                f = true;
            }
            if(flag == 1){
                a[i] = 2;
                flag++;
            }
            else if(flag == 2){
                a[i] = 3;
                flag++;
            }
            else{
                a[i] = 1;
            }
        }
        else if(mp[a[i]]>1){
            a[i] = b[a[i]];
        }
        else{
            a[i] = 1;
        }
    }
    for(auto x:a)cout<<x<<" ";
    cout<<endl;
    
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}