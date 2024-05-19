#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    string s[3];
    for(auto &x:s)cin>>x;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(s[i][j] == '?'){
                vector<char> v;
                for(int k = 0; k < 3; k++){
                    if(s[k][j]!='?')v.push_back(s[k][j]);
                }
                if(v[0] != 'A' and v[1] != 'A' )cout<<"A"<<endl;
                if(v[0] != 'B' and v[1] != 'B' )cout<<"B"<<endl;
                if(v[0] != 'C' and v[1] != 'C' )cout<<"C"<<endl;
            }
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