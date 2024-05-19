#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){   
    string s;
    cin>>s;
    int a=0,b=0,c=0;
    for(auto x:s){
        if(x=='T')a++;
        else if(x=='G')b++;
        else c++;
    }
    int ans = 0;
    ans += a*a;
    ans+=b*b;
    ans+=c*c;
    if(a and b and c){
        ans += min(a,min(b,c))*7;
    }
    cout<<ans<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}