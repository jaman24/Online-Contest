#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    ll need = n/3;
    ll rem = n%3;
    if(rem > 1){
        cout<<(need*2) + 1<<endl;
    }
    else{
        cout<<need*2<<endl;
    }
    int k = 1;
    for(int i = 0; i < need; i++){
        cout<<2<<" "<<k<<" "<<k+1<<endl;
        cout<<2<<" "<<k+1<<" "<<k+2<<endl;
        k+=3;
    }
    if(rem > 1){
        cout<<1<<" "<<k<<endl;
    }
    string s;
    cin>>s;
    for(int i = 0; i < need * 2; i+=2){
        if(s[i] == '1' and s[i+1] == '1'){
            cout<<(((i+1)/2)*3)+2<<endl;
            return;
        }
        else if(s[i] == '1'){
            cout<<(((i+1)/2)*3)+1<<endl;
            return;
        }
        else if(s[i+1] == '1'){
            cout<<(((i+1)/2)*3)+3<<endl;
            return;
        }
    }
    if(rem > 1){
        if(s[s.size()-1] == '1'){
            cout<<n-1<<endl;
            return;
        }
    }
    cout<<n<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}