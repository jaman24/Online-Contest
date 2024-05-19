#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    string a,b;
    cin>>a>>b;
    int c=0;
    for(int i=0;i<a.size()-1;i++){
       if(a[i]=='0' and a[i+1]=='1' and b[i]=='0' and b[i+1]=='1'){
        cout<<"YES"<<endl;
        return;
       }
    } 
    cout<<"NO"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}