#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    string chef,chefina;
    cin>>chef>>chefina;
    int a = 0,b = 0;
    for(int i = 0;i<n;i++){
        if(chef[i] == 'R' and chefina[i] == 'S'){
            a++;
        }
        if(chef[i] == 'S' and chefina[i] == 'P'){
            a++;
        }
        if(chef[i] == 'P' and chefina[i] == 'R'){
            a++;
        }   
        if(chefina[i] == 'R' and chef[i] == 'S'){
            b++;
        }
        if(chefina[i] == 'S' and chef[i] == 'P'){
            b++;
        }
        if(chefina[i] == 'P' and chef[i] == 'R'){
            b++;
        }   
    }
    if(a<=b){
        ll ans = (b-a+1)/2;
        if((b-a+1)%2)ans++;
        cout<<ans<<endl;
    }
    else{
        cout<<0<<endl;
    }
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}