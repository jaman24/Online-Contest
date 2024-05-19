#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n=10;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[i][j]=='X'){
                if((i==0 || i==9)or(j==0 || j==9))ans+=1;
                else if((i==1 || i==8) or (j==1 || j==8))ans+=2;
                else if((i==2 || i==7) or (j==2 || j==7))ans+=3;
                else if((i==3 || i==6) or (j==3 || j==6))ans+=4;
                else if((i==4 || i==5) or (j==4 || j==5))ans+=5;
            }
        }
    }
    cout<<ans<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}