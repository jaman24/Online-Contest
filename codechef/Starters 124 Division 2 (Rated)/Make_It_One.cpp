#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

void solve(){
    ll l,r;
    cin>>l>>r;
    int len = r - l + 1;
    if(l == r or (len%2 and l%2==0))cout<<-1<<endl;
    else{
        if(len%2){
            cout<<l+2<<" "<<l<<" "<<l+1<<" ";
            for(int i = l+3; i <= r; i+=2){
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<endl;
        }
        else{
            for(int i = l; i <= r; i+=2){
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<endl;
        }
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