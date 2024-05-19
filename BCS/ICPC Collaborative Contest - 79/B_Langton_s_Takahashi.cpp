#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n, m, k;
    cin>>n>>m>>k;
    string s[n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            s[i].push_back('.');
        }
    }

    // 0 - up, 1 - right, 2 - down, 3 - left 
    int i = 0, j = 0, face = 0;
    while(k--){
        if(i < 0 or j < 0){
            cout<<k<<" "<<face<<" "<<i<<" "<<j<<endl;
            break;
        }
        if(s[i][j] == '.'){
            s[i][j] = '#';
            face++;
            face %= 4;
            if(face == 0){
                i--;
                if(i < 0)i = n-1;
            }
            if(face == 1){
                j++;
                if(j >= m) j = 0;
            }
            if(face == 2){
                i++;
                if(i >= n)i = 0;
            }
            if(face == 3){
                j--;
                if( j < 0)j = m-1;
            }
        }
        else{
            s[i][j] = '.';
            face--;
            if(face < 0) face = 3;
            if(face == 0){
                i--;
                if(i < 0)i = n-1;
            }
            if(face == 1){
                j++;
                if(j >= m) j = 0;
            }
            if(face == 2){
                i++;
                if(i >= n)i = 0;
            }
            if(face == 3){
                j--;
                if( j < 0)j = m-1;
            }
        }
    }
    for(auto x:s){
        cout<<x<<endl;
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