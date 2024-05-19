#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    ll j[n],g[m],s1 = 0;
    for(int i=0;i<n;i++){
        cin>>j[i];
        s1+=j[i];
    }
    for(int i=0;i<m;i++){
        cin>>g[i];
    }
    sort(j,j+n);
    sort(g,g+m);
    if(j[0]<=g[0]){
        if(k%2){
            cout<<s1-j[0]+g[m-1]<<endl;
        }
        else{
            cout<<s1+min(j[n-1],g[m-1])-j[n-1]<<endl;
        }
    }
    else if(j[0]>=g[m-1]){
        if(k%2){
            cout<<s1<<endl;
        }
        else{
            cout<<s1-j[n-1]+g[0]<<endl;
        }
    }
    else{
        if(k%2){
            cout<<s1-j[0]+g[m-1]<<endl;
        }
        else{
            cout<<s1 - j[n-1] + min(g[m-1],j[n-1])<<endl;
        }
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