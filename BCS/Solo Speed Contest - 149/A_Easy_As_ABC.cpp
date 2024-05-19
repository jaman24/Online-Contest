#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n, m;
    cin>>n>>m;
    int grid[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>grid[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 1; j < m; j++){
            grid[i][j] += grid[i][j-1];
        }
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < m; j++){
            grid[i][j] += grid[i-1][j];
        }
    }
    int ans = 0;
    for(int l = 0; l < min(n, m); l++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int x = i + l;
                int y = j + l;
                if(x < n and y < m){
                    int sum = grid[x][y];
                    if(j-1 >= 0){
                        sum -= grid[x][j-1];
                    }
                    if(i-1 >= 0){
                        sum -= grid[i-1][y];
                    }
                    if(i-1 >= 0 and j-1>=0){
                        sum += grid[i-1][j-1];
                    }
                    int tot = (l+1) * (l+1);
                    if(tot == sum){
                        ans++;
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
    
}
int main(){
    FastIO;
    int cn = 1;
    // cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}