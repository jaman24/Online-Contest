#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    string s;
    cin>>s;
    string ans;
    ll b = 0, B = 0;
    for(int i = s.size()-1;i>=0;i--){
        if(s[i] == 'B'){
            B++;
        }
        else if(s[i] == 'b')b++;
        else{
            if(s[i] > 'Z'){
                if(b>0){
                    b--;
                }
                else{
                    ans+=s[i];
                }
            }
            else{
                if(B>0){
                    B--;
                }
                else{
                    ans+=s[i];
                }
            }
        }
    }
    reverse(ans.begin(),ans.end());
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