#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n,m;
    cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n-1;i++){
        bool f=false;
        int c=0;
        for(int j=0;j<m;j++){
            if(s[i][j]=='U' and s[i+1][j]=='D'){
                if(f){
                    s[i][j]='B';
                    s[i+1][j]='W';
                    f=false;
                }
                else{
                    s[i][j]='W';
                    s[i+1][j]='B';
                    f=true;
                }
                c++;
            }
        }
        if(c%2){
            cout<<-1<<endl;
            return;
        }
    }
    for(int i=0;i<m-1;i++){
        bool f=false;
        int c=0;
        for(int j=0;j<n;j++){
             if(s[j][i]=='L' and s[j][i+1]=='R'){
                if(f){
                    s[j][i]='B';
                    s[j][i+1]='W';
                    f=false;
                }
                else{
                    s[j][i]='W';
                    s[j][i+1]='B';
                    f=true;
                }
                c++;
            }
        }
        if(c%2){
            cout<<-1<<endl;
            return;
        }
    }
    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
    // cout<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}