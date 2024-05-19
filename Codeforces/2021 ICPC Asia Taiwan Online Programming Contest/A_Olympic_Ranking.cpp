#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a[n],b[n],c[n];
    string s[n];
    map<ll,ll> mp;
    ll mxa = -1;
    for(int i = 0; i < n; i++){
        cin>>a[i]>>b[i]>>c[i];
        mp[a[i]]++;
        mxa = max(mxa , a[i]);
        getline(cin, s[i]);
    }
    if(mp[mxa] == 1){
        for(int i = 0;i<n;i++){
            if(mxa == a[i]){
                cout<<s[i]<<endl;
                return;
            }
        }
    }
    mp.clear();
    ll mxb = -1;
    for(int i = 0;i<n;i++){
        if(mxa == a[i]){
            mp[b[i]]++;
            mxb = max(mxb , b[i]);
        }
    }
    if(mp[mxb] == 1){
        for(int i = 0;i<n;i++){
            if(mxa == a[i] and b[i] == mxb){
                cout<<s[i]<<endl;
                return;
            }
        }
    }
    ll mxc = -1;
    for(int i = 0;i<n;i++){
        if(mxa == a[i] and b[i] == mxb){
            mxc = max(mxc , c[i]);
        }
    }
    for(int i = 0;i<n;i++){
        if(mxa == a[i] and b[i] == mxb and c[i] == mxc){
            cout<<s[i]<<endl;
            return;
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