#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=1; i<=n;i++){
        int x = i;
        int a = 0,b =0,ga = 0,gb = 0;
        for(int j=0;j<n;j++){
            if(s[j]=='A')a++;
            else b++;
            if(a>=x){
                a = 0;
                b = 0;
                ga++;
            }
            if(b>=x){
                b = 0;
                a = 0;
                gb++;
            }
        }
        if(s[n-1] == 'B' and gb>ga){
            cout<<"B"<<endl;
            return;
        }
        if(s[n-1] == 'A' and gb<ga){
            cout<<"A"<<endl;
            return;
        }
    }
    cout<<"?"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}