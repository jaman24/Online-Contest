#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    string x,y;
    cin>>x>>y;
    ll a=0,b=0,c=0,a1=0,b1=0;
    for(int i=0;i<n;i++){
        if(y[i]=='C' and y[i]!=x[i]){
            cout<<"No"<<endl;
            return;
        }
        if(y[i]=='C'){
            if((a1>c+a || b1>c+b)){
                cout<<"No"<<endl;
                return;
            }
            a=0,b=0,c=0,a1=0,b1=0;
            continue;
        }
        if(x[i]=='A')a++;
        else if(x[i]=='B')b++;
        else c++;
        if(y[i]=='A')a1++;
        else if(y[i]=='B')b1++;
        if(a<a1 and a+c>=a1){
            ll need = a1 - a;
            a+=need;
            c-=need;
        }
        if(a+c<a1 || b>b1){
            cout<<"No"<<endl;
            return;
        }
        // cout<<i<<" "<<a<<" " <<b<<" "<<c<< " "<<a1<<" "<<b1<<endl;

    }
    if((a1>c+a || b1>c+b)){
        cout<<"No"<<endl;
        return;
    }
    cout<<"Yes"<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}