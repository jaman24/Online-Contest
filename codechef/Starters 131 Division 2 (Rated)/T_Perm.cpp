#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n;
    cin>>n;
    if(n%3 == 2){
        cout<<"4 5 2 1 3 ";
        for(int i = 6; i <= n; i++){
            if(i%3 == 1){
                cout<<i<<" ";
            }
            else if(i%3 == 2){
                cout<<i-2<<" ";
            }
            else cout<<i+2<<" ";
        }
        cout<<endl;
    }
    else{
        for(int i = 1; i <= n; i++){
            if(i%3 == 1){
                cout<<i<<" ";
            }
            else if(i%3 == 2){
                cout<<i+1<<" ";
            }
            else cout<<i-1<<" ";
        }
        cout<<endl;
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