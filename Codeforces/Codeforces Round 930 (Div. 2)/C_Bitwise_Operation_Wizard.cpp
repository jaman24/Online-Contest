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
    int mx = 0;
    for(int i = 1; i < n; i++){
        cout<<'?'<<" "<<mx<<" "<<mx<<" "<<i<<" "<<i<<endl;
        char c;
        cin>>c;
        if(c == '<'){
            mx = i;
        }
    }
    int ind = 0;
    for(int i = 1; i < n; i++){
        cout<<'?'<<" "<<mx<<" "<<i<<" "<<mx<<" "<<ind<<endl;
        char c;
        cin>>c;
        if(c == '='){
            cout<<'?'<<" "<<i<<" "<<i<<" "<<ind<<" "<<ind<<endl;
            char cc;
            cin>>cc;
            if(cc == '<')ind = i;
        }
        else if(c == '>'){
            ind = i;
        }
    }
    
    cout<<'!'<<" "<<mx<<" "<<ind<<endl;
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