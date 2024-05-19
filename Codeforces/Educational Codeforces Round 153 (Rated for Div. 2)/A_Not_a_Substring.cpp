#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    string s;
    cin>>s;
    n = s.size();
    if(n == 2 and s == "()"){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        bool f = false;
        ll a = 0, b = 0, mxa = 0, mxb = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == '('){
                b = max(mxb , b);
                mxa++;
                mxb = 0;
            }
            else{
                a = max(mxa, a);
                mxb++;
                mxa = 0;
            }
        }
        b = max(mxb , b);
        a = max(mxa, a);
        if(a <= 1 and b <= 1){
            for(int i = 0;i<n;i++){
                cout<<"(";
            }
            for(int i = 0;i<n;i++){
                cout<<")";
            }
        }
        else{
            for(int i = 0;i<n;i++){
                cout<<"()";
            }
        }
        cout<<endl;
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