#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    string s;
    cin>>s;
    ll a[s.size()+10]={0};
    ll temp = 0,last = 0;
    bool f=true;
    for(int i=0;i<s.size();i++){
        if(s[i]=='+'){
            last++;
            if(a[last-1]==1 || a[last-1]==0){
                a[last]=0;
            }
            else a[last]=-1;
        }
        else if(s[i]=='-'){
            last--;
        }
        else if(s[i]=='1'){
            if(a[last]!=0 and a[last]!=1){
                cout<<"NO"<<endl;
                return;
            }
            if(last<=1)
                a[last]=0;
            else a[last]=1;
        }
        else{
            if((a[last]!=-1 and a[last]!=0)||last<=1){
                cout<<"NO"<<endl;
                return;
            }
            a[last]=-1;
        }
        // for(int j=1;j<=last;j++)cout<<a[j]<<" ";
        // cout<<endl;
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