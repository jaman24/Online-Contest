#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll r = 0,b = 0;
    int i = 0;
    while(i<n and s[i] == 'W')i++;
    for(int j=i;j<n;j++){
        if(s[j] == 'W'){
            if(r <=0 or b <= 0){
                cout<<"NO"<<endl;
                return;
            }
            while(j<n and s[j]=='W')j++;
            r = 0;
            b = 0;
        }
        if(s[j] == 'B')b++;
        if(s[j] == 'R')r++;
    }
    if(s[n-1]!='W' and (r <= 0 or b <= 0)){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;


}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}