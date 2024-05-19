#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll a=0,b=0,ab=0,o=0;
    for(int i=0;i<n;i++){
        string c;
        cin>>c;
        if(c=="A")a++;
        else if(c=="B")b++;
        else if(c=="AB")ab++;
        else o++;
    }
    ll ans = 0;
    ans = max(ans , o+a+ab);
    ans = max(ans , o+b+ab);
    ans = max(ans , ab);
    ans = max(ans , o+ab);
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