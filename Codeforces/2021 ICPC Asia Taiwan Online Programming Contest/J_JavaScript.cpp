#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    string x,y;
    cin>>x>>y;
    
    bool f = true;
    for(int i = 0;i<x.size();i++){
        if(x[i]!='0' and x[i]!='1' and x[i]!='2' and x[i]!='3' and x[i]!='4' and x[i]!='5' and x[i]!='6' and x[i]!='7' and x[i]!='8' and x[i]!='9'){
            f = false;
            break;
        }
    }
    for(int i = 0;i<y.size();i++){
        if(y[i]!='0' and y[i]!='1' and y[i]!='2' and y[i]!='3' and y[i]!='4' and y[i]!='5' and y[i]!='6' and y[i]!='7' and y[i]!='8' and y[i]!='9'){
            f = false;
            break;
        }
    }
    
    if(f){
        int x1,y1;
        x1 = stoi(x);
        y1 = stoi(y);
        cout<<x1-y1<<endl;
    }
    else{
        cout<<"NaN"<<endl;
    }


}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}