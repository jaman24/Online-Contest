#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin>>n;
    int grid[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)grid[i][j] = -1;
    }
    int i = 0, j = 0;
    string s = "DRULD";
    char c = 'L';
    int num = 2;
    grid[0][0] = 1;
    while((i != n/2 or j != n/2)){
        // cout<<i<<" "<<j<<" "<<c<<endl;
        if(c == 'L'){
            i++;
            for(; i < n; i++){
                if(grid[i][j] != -1)break;
                grid[i][j] = num;
                num++;
            }
            i--;
            c = 'D';
        }
        else if(c == 'D'){
            j++;
            for(; j < n; j++){
                if(grid[i][j] != -1)break;
                grid[i][j] = num;
                num++;
            }
            j--;
            c = 'R';
        }
        else if(c == 'R'){
            i--;
            for(; i >=0; i--){
                if(grid[i][j] != -1)break;
                grid[i][j] = num;
                num++;
            }
            i++;
            c = 'U';
        }
        else if(c == 'U'){
            j--;
            for(; j >= 0; j--){
                if(grid[i][j] != -1)break;
                grid[i][j] = num;
                num++;
            }
            j++;
            c = 'L';
        }
    }
    grid[n/2][n/2] = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] != 0)cout<<grid[i][j]<<" ";
            else cout<<'T'<<" ";
        }
        cout<<endl;
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