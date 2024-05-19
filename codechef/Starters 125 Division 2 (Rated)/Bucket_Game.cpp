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
    int a = 0, ot = 0, sum = 0;
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        if(x == 1)a++;
        else{
            ot++;
            sum += x - 2;
        }
    }
    ll p = (a + 1)/2, q = a/2;
    if(a%2){
        if(sum % 2==0){
            p += ot;
        }
        else{
            q += ot;
        }
    }
    else{
        if(sum % 2){
            p += ot;
        }
        else{
            q += ot;
        }
    }
    if(p == q){
        cout<<"Draw"<<endl;
    }
    else if(p > q){
        cout<<"Alice"<<endl;
    }
    else cout<<"Bob"<<endl;

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